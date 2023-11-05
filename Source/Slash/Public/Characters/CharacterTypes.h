#pragma once



UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECS_EquippedOneHandedWeapon UMETA(DisplayName = "Equipped One-Handed Weapon"),
	ECS_EquippedTwoHandedWeapon UMETA(DisplayName = "Equipped Two-Handed Weapon")
};

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	ECS_NoWeapon UMETA(DisplayName = "No weapon"),
	ECS_OneHandedWeapon UMETA(DisplayName = "One-Handed Weapon"),
	ECS_TwoHandedWeapon UMETA(DisplayName = "Two-Handed Weapon")
};