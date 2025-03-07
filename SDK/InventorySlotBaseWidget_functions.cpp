#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventorySlotBaseWidget

#include "Basic.hpp"

#include "InventorySlotBaseWidget_classes.hpp"
#include "InventorySlotBaseWidget_parameters.hpp"


namespace SDK
{

// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.ExecuteUbergraph_InventorySlotBaseWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::ExecuteUbergraph_InventorySlotBaseWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "ExecuteUbergraph_InventorySlotBaseWidget");

	Params::InventorySlotBaseWidget_C_ExecuteUbergraph_InventorySlotBaseWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnInputWidgetInputB
// (BlueprintCallable, BlueprintEvent)

void UInventorySlotBaseWidget_C::OnInputWidgetInputB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "OnInputWidgetInputB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnWidgetInputX
// (BlueprintCallable, BlueprintEvent)

void UInventorySlotBaseWidget_C::OnWidgetInputX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "OnWidgetInputX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.UI_Gamepad_B
// (BlueprintCallable, BlueprintEvent)

void UInventorySlotBaseWidget_C::UI_Gamepad_B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "UI_Gamepad_B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventorySlotBaseWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.SetInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWidget_C*               InventoryWidget_0                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::SetInventory(class UInventoryWidget_C* InventoryWidget_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "SetInventory");

	Params::InventorySlotBaseWidget_C_SetInventory Parms{};

	Parms.InventoryWidget_0 = InventoryWidget_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.UpdateDragDropObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTslItemDragDropOperation_C*      DragDropObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::UpdateDragDropObject(class UTslItemDragDropOperation_C* DragDropObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "UpdateDragDropObject");

	Params::InventorySlotBaseWidget_C_UpdateDragDropObject Parms{};

	Parms.DragDropObject = DragDropObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.ShowToolTip
// (BlueprintCallable, BlueprintEvent)

void UInventorySlotBaseWidget_C::ShowToolTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "ShowToolTip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventorySlotBaseWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnUpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem*                            Item_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::OnUpdateItem(class UItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "OnUpdateItem");

	Params::InventorySlotBaseWidget_C_OnUpdateItem Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    PointerEvent                                           (Parm)
// class UDragDropOperation*               Operation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "OnDragLeave");

	Params::InventorySlotBaseWidget_C_OnDragLeave Parms{};

	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (Parm)
// class UDragDropOperation*               Operation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "OnDragEnter");

	Params::InventorySlotBaseWidget_C_OnDragEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UInventorySlotBaseWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "OnMouseLeave");

	Params::InventorySlotBaseWidget_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UInventorySlotBaseWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "OnMouseEnter");

	Params::InventorySlotBaseWidget_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.UpdateDragDroppingItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem*                            DroppingItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::UpdateDragDroppingItem(class UItem* DroppingItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "UpdateDragDroppingItem");

	Params::InventorySlotBaseWidget_C_UpdateDragDroppingItem Parms{};

	Parms.DroppingItem = DroppingItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetBackgroundTexture_Bp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture*                         BackgroundTexture                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::GetBackgroundTexture_Bp(class UTexture** BackgroundTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetBackgroundTexture_Bp");

	Params::InventorySlotBaseWidget_C_GetBackgroundTexture_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BackgroundTexture != nullptr)
		*BackgroundTexture = Parms.BackgroundTexture;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.IsSlotOn_Bp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsOn                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::IsSlotOn_Bp(bool* IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "IsSlotOn_Bp");

	Params::InventorySlotBaseWidget_C_IsSlotOn_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOn != nullptr)
		*IsOn = Parms.IsOn;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.IsSlotSubOn_Bp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    SubOn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "IsSlotSubOn_Bp");

	Params::InventorySlotBaseWidget_C_IsSlotSubOn_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SubOn != nullptr)
		*SubOn = Parms.SubOn;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetTslItemDragDropOperation_Bp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTslItemDragDropOperation_C*      TslItemDragDropOperation_0                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::GetTslItemDragDropOperation_Bp(class UTslItemDragDropOperation_C** TslItemDragDropOperation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetTslItemDragDropOperation_Bp");

	Params::InventorySlotBaseWidget_C_GetTslItemDragDropOperation_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TslItemDragDropOperation_0 != nullptr)
		*TslItemDragDropOperation_0 = Parms.TslItemDragDropOperation_0;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.UpdateSlotBackground_Bp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::UpdateSlotBackground_Bp(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "UpdateSlotBackground_Bp");

	Params::InventorySlotBaseWidget_C_UpdateSlotBackground_Bp Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.IsSlotMouseOver_Bp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsMouseOver                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "IsSlotMouseOver_Bp");

	Params::InventorySlotBaseWidget_C_IsSlotMouseOver_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsMouseOver != nullptr)
		*IsMouseOver = Parms.IsMouseOver;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.UpdateIconVisibility_Bp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::UpdateIconVisibility_Bp(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "UpdateIconVisibility_Bp");

	Params::InventorySlotBaseWidget_C_UpdateIconVisibility_Bp Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.UpdateItemIcon_Bp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::UpdateItemIcon_Bp(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "UpdateItemIcon_Bp");

	Params::InventorySlotBaseWidget_C_UpdateItemIcon_Bp Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetIcon_Bp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UInventorySlotBaseWidget_C::GetIcon_Bp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetIcon_Bp");

	Params::InventorySlotBaseWidget_C_GetIcon_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.UpdateItem_Bp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BoundWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::UpdateItem_Bp(class UWidget* BoundWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "UpdateItem_Bp");

	Params::InventorySlotBaseWidget_C_UpdateItem_Bp Parms{};

	Parms.BoundWidget = BoundWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetItem_Bp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                            Item_0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::GetItem_Bp(class UItem** Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetItem_Bp");

	Params::InventorySlotBaseWidget_C_GetItem_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Item_0 != nullptr)
		*Item_0 = Parms.Item_0;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.CreateTslDragDropOperation_Bp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTslItemDragDropOperation_C*      OutOperation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::CreateTslDragDropOperation_Bp(class UTslItemDragDropOperation_C** OutOperation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "CreateTslDragDropOperation_Bp");

	Params::InventorySlotBaseWidget_C_CreateTslDragDropOperation_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutOperation != nullptr)
		*OutOperation = Parms.OutOperation;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetOptions_Bp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Options                                                (Parm, OutParm, ZeroConstructor)

void UInventorySlotBaseWidget_C::GetOptions_Bp(class FString* Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetOptions_Bp");

	Params::InventorySlotBaseWidget_C_GetOptions_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Options != nullptr)
		*Options = std::move(Parms.Options);
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetOperationSpawnValue_Bp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                            Item_0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEquipableItem*                   EquipableItem                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponItem*                      WeaponItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UThrowableItem*                   ThrowableItem                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAttachableItem*                  AttachmentItem                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISlotInterface>  SlotItem                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISlotContainerInterface>Container                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::GetOperationSpawnValue_Bp(class UItem** Item_0, class UEquipableItem** EquipableItem, class UWeaponItem** WeaponItem, class UThrowableItem** ThrowableItem, class UAttachableItem** AttachmentItem, TScriptInterface<class ISlotInterface>* SlotItem, TScriptInterface<class ISlotContainerInterface>* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetOperationSpawnValue_Bp");

	Params::InventorySlotBaseWidget_C_GetOperationSpawnValue_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Item_0 != nullptr)
		*Item_0 = Parms.Item_0;

	if (EquipableItem != nullptr)
		*EquipableItem = Parms.EquipableItem;

	if (WeaponItem != nullptr)
		*WeaponItem = Parms.WeaponItem;

	if (ThrowableItem != nullptr)
		*ThrowableItem = Parms.ThrowableItem;

	if (AttachmentItem != nullptr)
		*AttachmentItem = Parms.AttachmentItem;

	if (SlotItem != nullptr)
		*SlotItem = Parms.SlotItem;

	if (Container != nullptr)
		*Container = Parms.Container;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetInventoryWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryWidget_C*               InventoryWidget_0                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::GetInventoryWidget(class UInventoryWidget_C** InventoryWidget_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetInventoryWidget");

	Params::InventorySlotBaseWidget_C_GetInventoryWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryWidget_0 != nullptr)
		*InventoryWidget_0 = Parms.InventoryWidget_0;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetBackgroundState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventorySlotBaseWidget_C::GetBackgroundState(float* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetBackgroundState");

	Params::InventorySlotBaseWidget_C_GetBackgroundState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.Up
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::Up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "Up");

	Params::InventorySlotBaseWidget_C_Up Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.SetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::SetFocus(bool NewFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "SetFocus");

	Params::InventorySlotBaseWidget_C_SetFocus Parms{};

	Parms.NewFocus = NewFocus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.Right
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::Right()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "Right");

	Params::InventorySlotBaseWidget_C_Right Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.Left
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::Left()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "Left");

	Params::InventorySlotBaseWidget_C_Left Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.InputY
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::InputY()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "InputY");

	Params::InventorySlotBaseWidget_C_InputY Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.InputX
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::InputX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "InputX");

	Params::InventorySlotBaseWidget_C_InputX Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.InputRT
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::InputRT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "InputRT");

	Params::InventorySlotBaseWidget_C_InputRT Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.InputRB
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::InputRB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "InputRB");

	Params::InventorySlotBaseWidget_C_InputRB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.InputLT
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::InputLT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "InputLT");

	Params::InventorySlotBaseWidget_C_InputLT Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.InputLB
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::InputLB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "InputLB");

	Params::InventorySlotBaseWidget_C_InputLB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.InputB
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::InputB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "InputB");

	Params::InventorySlotBaseWidget_C_InputB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.InputA
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::InputA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "InputA");

	Params::InventorySlotBaseWidget_C_InputA Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.Down
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::Down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "Down");

	Params::InventorySlotBaseWidget_C_Down Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.IsFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::IsFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "IsFocus");

	Params::InventorySlotBaseWidget_C_IsFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetUpWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

class UUserWidget* UInventorySlotBaseWidget_C::GetUpWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetUpWidget");

	Params::InventorySlotBaseWidget_C_GetUpWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetRightWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

class UUserWidget* UInventorySlotBaseWidget_C::GetRightWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetRightWidget");

	Params::InventorySlotBaseWidget_C_GetRightWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetLeftWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

class UUserWidget* UInventorySlotBaseWidget_C::GetLeftWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetLeftWidget");

	Params::InventorySlotBaseWidget_C_GetLeftWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetFocusingChildWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

class UUserWidget* UInventorySlotBaseWidget_C::GetFocusingChildWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetFocusingChildWidget");

	Params::InventorySlotBaseWidget_C_GetFocusingChildWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.GetDownWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

class UUserWidget* UInventorySlotBaseWidget_C::GetDownWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "GetDownWidget");

	Params::InventorySlotBaseWidget_C_GetDownWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventorySlotBaseWidget.InventorySlotBaseWidget_C.IsFocusable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInventorySlotBaseWidget_C::IsFocusable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventorySlotBaseWidget_C", "IsFocusable");

	Params::InventorySlotBaseWidget_C_IsFocusable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

