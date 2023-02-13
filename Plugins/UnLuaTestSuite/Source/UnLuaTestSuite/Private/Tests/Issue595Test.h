// Tencent is pleased to support the open source community by making UnLua available.
// 
// Copyright (C) 2019 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the MIT License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at
//
// http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.

#pragma once

#include "UnLuaInterface.h"
#include "Issue595Test.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UIssue595Interface : public UInterface
{
    GENERATED_BODY()
};

class IIssue595Interface
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    int32 Test() const;
};

UCLASS()
class UIssue595Object
    : public UObject,
      public IIssue595Interface,
      public IUnLuaInterface
{
    GENERATED_BODY()

public:
    virtual int32 Test_Implementation() const override
    {
        return 1;
    }

    virtual FString GetModuleName_Implementation() const override
    {
        return TEXT("Tests.Regression.Issue595.Issue595Object");
    }
};
