﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "App.xaml.h"
#include "DirectXPage.xaml.h"
#include "XamlBindingInfo.g.hpp"
#include "App.g.hpp"
#include "DirectXPage.g.hpp"

template<typename T>
::Platform::Object^ ActivateType()
{
    return ref new T;
}

template<typename TInstance, typename TItem>
void CollectionAdd(::Platform::Object^ instance, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Append((TItem)item);
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(::Platform::Object^ instance, ::Platform::Object^ key, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Insert((TKey)key, (TItem)item);
}

template<typename T>
::Platform::Object^ FromStringConverter(::XamlTypeInfo::InfoProvider::XamlUserType^ userType, ::Platform::String^ input)
{
    return ref new ::Platform::Box<T>((T)userType->CreateEnumUIntFromString(input));
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_BuyVisibility(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->BuyVisibility);
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Foreground(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Foreground;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_ProductId(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->ProductId;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Status(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Status;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Price(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Price;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Title(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Title;
}

enum TypeInfo_Flags
{
    TypeInfo_Flags_None                 = 0x00,
    TypeInfo_Flags_IsLocalType          = 0x01,
    TypeInfo_Flags_IsSystemType         = 0x02,
    TypeInfo_Flags_IsReturnTypeStub     = 0x04,
    TypeInfo_Flags_IsBindable           = 0x08,
    TypeInfo_Flags_IsMarkupExtension    = 0x10, 
};

struct TypeInfo
{
    PCWSTR  typeName;
    PCWSTR contentPropertyName;
    ::Platform::Object^ (*activator)();
    void (*collectionAdd)(::Platform::Object^, ::Platform::Object^);
    void (*dictionaryAdd)(::Platform::Object^, ::Platform::Object^, ::Platform::Object^);
    ::Platform::Object^ (*fromStringConverter)(::XamlTypeInfo::InfoProvider::XamlUserType^, ::Platform::String^);
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    int     createFromStringIndex;
    ::Windows::UI::Xaml::Interop::TypeKind kindofType;
    unsigned int flags;
    int boxedTypeIndex;
};

const TypeInfo TypeInfos[] = 
{
    //   0
    L"Int32", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    -1,
    //   1
    L"Object", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    -1,
    //   2
    L"String", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    -1,
    //   3
    L"Game.DirectXPage", L"",
    &ActivateType<::Game::DirectXPage>, nullptr, nullptr, nullptr,
    5, // Windows.UI.Xaml.Controls.Page
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    -1,
    //   4
    L"Game.ProductItem", L"",
    nullptr, nullptr, nullptr, nullptr,
    1, // Object
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_IsBindable | TypeInfo_Flags_None,
    -1,
    //   5
    L"Windows.UI.Xaml.Controls.Page", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    6, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    -1,
    //   6
    L"Windows.UI.Xaml.Controls.UserControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    6, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    -1,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    6, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_None,
};

const UINT TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      1,   //   6
      3,   //   7
      3,   //   8
      3,   //   9
      3,   //  10
      3,   //  11
      3,   //  12
      3,   //  13
      3,   //  14
      3,   //  15
      3,   //  16
      5,   //  17
      5,   //  18
      5,   //  19
      5,   //  20
      5,   //  21
      5,   //  22
      5,   //  23
      5,   //  24
      5,   //  25
      5,   //  26
      5,   //  27
      5,   //  28
      5,   //  29
      6,   //  30
      6,   //  31
      6,   //  32
      6,   //  33
      6,   //  34
      6,   //  35
      6,   //  36
      7,   //  37
};

const TypeInfo* GetTypeInfo(::Platform::String^ typeName)
{
    auto typeNameLength = typeName->Length();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        for (UINT i = TypeInfoLookup[typeNameLength]; i < TypeInfoLookup[typeNameLength+1]; i++)
        {
            if (typeName == ::Platform::StringReference(TypeInfos[i].typeName))
            {
                return &TypeInfos[i];
            }
        }
    }
    return nullptr;
}

struct MemberInfo 
{
    PCWSTR shortName;
    ::Platform::Object^ (*getter)(::Platform::Object^);
    void (*setter)(::Platform::Object^, ::Platform::Object^);
    int typeIndex;
    int targetTypeIndex;
    bool isReadOnly;
    bool isDependencyProperty;
    bool isAttachable;
};

const MemberInfo MemberInfos[] = 
{
    //   0 - Game.ProductItem.Foreground
    L"Foreground",
    &GetReferenceTypeMember_Foreground<::Game::ProductItem>,
    nullptr,
    2, // String
    -1,
    true,  false, false,
    //   1 - Game.ProductItem.ProductId
    L"ProductId",
    &GetReferenceTypeMember_ProductId<::Game::ProductItem>,
    nullptr,
    2, // String
    -1,
    true,  false, false,
    //   2 - Game.ProductItem.BuyVisibility
    L"BuyVisibility",
    &GetValueTypeMember_BuyVisibility<::Game::ProductItem, ::default::int32>,
    nullptr,
    0, // Int32
    -1,
    true,  false, false,
    //   3 - Game.ProductItem.Status
    L"Status",
    &GetReferenceTypeMember_Status<::Game::ProductItem>,
    nullptr,
    2, // String
    -1,
    true,  false, false,
    //   4 - Game.ProductItem.Price
    L"Price",
    &GetReferenceTypeMember_Price<::Game::ProductItem>,
    nullptr,
    2, // String
    -1,
    true,  false, false,
    //   5 - Game.ProductItem.Title
    L"Title",
    &GetReferenceTypeMember_Title<::Game::ProductItem>,
    nullptr,
    2, // String
    -1,
    true,  false, false,
};

PCWSTR GetShortName(PCWSTR longName)
{
    PCWSTR separator = wcsrchr(longName, '.');
    return separator != nullptr ? separator + 1: longName;
}


const MemberInfo* GetMemberInfo(::Platform::String^ longMemberName)
{
    auto lastDotIndex = longMemberName->Length();
    while (true)
    {
        if (longMemberName->Data()[lastDotIndex] == '.')
        {
            const TypeInfo* pTypeInfo = GetTypeInfo(ref new ::Platform::String(longMemberName->Data(), lastDotIndex));
            const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
            if (pTypeInfo)
            {
                PCWSTR shortMemberName = GetShortName(longMemberName->Data());
                for (int i = pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
                {
                    if (wcscmp(shortMemberName, MemberInfos[i].shortName) == 0)
                    {
                        return &MemberInfos[i];
                    }
                }
            }
            break;
        }
        if (lastDotIndex == 0)
        {
            break;
        }
        lastDotIndex--;
    }
    return nullptr;
}

#pragma warning(push)
#pragma warning(disable: 4691)
::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        auto otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
        _otherProviders = otherProviders;
    }
    return _otherProviders;
}
#pragma warning(pop)

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    const TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (pTypeInfo == nullptr || pNextTypeInfo == nullptr)
    {
        return nullptr;
    }
    else if (pTypeInfo->flags & TypeInfo_Flags_IsSystemType)
    {
        return ref new ::XamlTypeInfo::InfoProvider::XamlSystemBaseType(typeName);
    }
    else
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(
            this, 
            ::Platform::StringReference(pTypeInfo->typeName), 
            this->GetXamlTypeByName(::Platform::StringReference(pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L"")));
        userType->KindOfType = pTypeInfo->kindofType;
        userType->Activator = pTypeInfo->activator;
        userType->CollectionAdd = pTypeInfo->collectionAdd;
        userType->DictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->FromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName = ::Platform::StringReference(pTypeInfo->contentPropertyName);
        userType->IsLocalType = pTypeInfo->flags & TypeInfo_Flags_IsLocalType;
        userType->IsReturnTypeStub = pTypeInfo->flags & TypeInfo_Flags_IsReturnTypeStub;
        userType->IsBindable = pTypeInfo->flags & TypeInfo_Flags_IsBindable;
        userType->IsMarkupExtension = pTypeInfo->flags & TypeInfo_Flags_IsMarkupExtension;
        userType->CreateFromStringMethod = nullptr;
        userType->SetBoxedType(this->GetXamlTypeByName(::Platform::StringReference(pTypeInfo->boxedTypeIndex >= 0 ? TypeInfos[pTypeInfo->boxedTypeIndex].typeName : L"")));
        int nextMemberIndex = pTypeInfo->firstMemberIndex;
        for (int i=pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
        {
            userType->AddMemberName(::Platform::StringReference(MemberInfos[i].shortName));
            nextMemberIndex++;
        }
        return userType;
    }
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = nullptr;
    const MemberInfo* pMemberInfo = GetMemberInfo(longMemberName);
    if (pMemberInfo != nullptr)
    {
        xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(
            this,
            ::Platform::StringReference(pMemberInfo->shortName),
            ::Platform::StringReference(TypeInfos[pMemberInfo->typeIndex].typeName));
        xamlMember->Getter = pMemberInfo->getter;
        xamlMember->Setter = pMemberInfo->setter;
        xamlMember->TargetTypeName = pMemberInfo->targetTypeIndex >= 0 ? ::Platform::StringReference(TypeInfos[pMemberInfo->targetTypeIndex].typeName) : L"";
        xamlMember->IsReadOnly = pMemberInfo->isReadOnly;
        xamlMember->IsDependencyProperty = pMemberInfo->isDependencyProperty;
        xamlMember->IsAttachable = pMemberInfo->isAttachable;
    }
    return xamlMember;
}
