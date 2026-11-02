// rea decompile_all
// name: FUN_004637ce
// address: 0x4637ce
// body: available
// range: 0x4637ce-0x463bac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004637ce(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  undefined4 **appuStack_3c [5];
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4637da;
  local_28 = (undefined4 *)0x0;
  appuStack_3c[0] = (undefined4 **)0x4637e9;
  FUN_004652cd();
  local_8 = 0;
  cVar1 = FUN_00463201();
  if (cVar1 == '\0') {
    *param_1 = 0;
LAB_00463b9b:
    appuStack_3c[0] = (undefined4 **)0x463ba3;
    FUN_004652d6();
    return param_1;
  }
  appuStack_3c[0] = (undefined4 **)0x0;
  cVar1 = FUN_004631a5(&DAT_00917188);
  if (cVar1 == '\0') {
    appuStack_3c[0] = (undefined4 **)0x0;
    cVar1 = FUN_004631a5(&DAT_00916bd4);
    if (cVar1 != '\0') {
      appuStack_3c[0] = &local_18;
      FUN_004637ce();
      local_8._0_1_ = 5;
      if (local_18 == (undefined4 *)0x0) {
        appuStack_3c[0] = &local_24;
        FUN_0046537e();
        if (*(char *)*in_ECX == '\0') {
          FUN_00465317();
        }
        *param_1 = 0;
        appuStack_3c[0] = (undefined4 **)0x463aa9;
        FUN_004652d6();
      }
      else {
        appuStack_3c[0] = local_14;
        cVar1 = FUN_0046595f();
        if (cVar1 == '\0') {
          appuStack_3c[0] = (undefined4 **)0x10;
          puVar4 = (undefined4 *)FUN_005af82d();
          local_8._0_1_ = 6;
          local_28 = puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            appuStack_3c[0] = (undefined4 **)0xc;
            puVar5 = (undefined4 *)FUN_005af82d();
            if (puVar5 != (undefined4 *)0x0) {
              appuStack_3c[0] = local_14;
              puVar5[1] = 0;
              *puVar5 = juce::Expression::Helpers::SymbolTerm::vftable;
              FUN_004652e4();
            }
            appuStack_3c[0] = (undefined4 **)0x463b39;
            FUN_00461e31();
            *puVar4 = juce::Expression::Helpers::DotOperator::vftable;
          }
          *param_1 = (int)puVar4;
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[1] = puVar4[1] + 1;
          }
        }
        else {
          *param_1 = (int)local_18;
          if (local_18 != (undefined4 *)0x0) {
            local_18[1] = local_18[1] + 1;
          }
        }
      }
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_18 != (undefined4 *)0x0) {
        piVar2 = local_18 + 1;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
LAB_00463a4b:
          appuStack_3c[0] = (undefined4 **)0x1;
          (**(code **)*local_18)();
        }
      }
      goto LAB_00463b9b;
    }
    appuStack_3c[0] = (undefined4 **)0xc;
    puVar4 = (undefined4 *)FUN_005af82d();
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      appuStack_3c[0] = local_14;
      puVar4[1] = 0;
      *puVar4 = juce::Expression::Helpers::SymbolTerm::vftable;
      FUN_004652e4();
    }
    *param_1 = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = puVar4[1] + 1;
    }
    goto LAB_004638a4;
  }
  appuStack_3c[0] = (undefined4 **)0x18;
  local_1c = (undefined4 *)FUN_005af82d();
  if (local_1c == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    appuStack_3c[0] = local_14;
    local_1c[1] = 0;
    *local_1c = juce::Expression::Helpers::Function::vftable;
    FUN_004652e4();
    local_1c[3] = 0;
    local_1c[4] = 0;
    local_1c[5] = 0;
  }
  puVar4 = local_1c;
  appuStack_3c[0] = &local_18;
  local_8._0_1_ = 1;
  local_24 = local_1c;
  FUN_0046338e();
  local_8._0_1_ = 2;
  if (local_18 == (undefined4 *)0x0) {
    appuStack_3c[0] = (undefined4 **)0x0;
    cVar1 = FUN_004631a5(&DAT_0090f544);
    if (cVar1 == '\0') {
      local_28 = appuStack_3c;
      FUN_00465bec(appuStack_3c,local_14);
      appuStack_3c[0] = (undefined4 **)FUN_00465c6b(&local_20);
      iVar3 = FUN_0046318f();
      *param_1 = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      goto LAB_004638ea;
    }
LAB_00463879:
    *param_1 = (int)puVar4;
    local_24 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = puVar4[1] + 1;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_18 == (undefined4 *)0x0) goto LAB_004638a4;
    piVar2 = local_18 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) goto LAB_004638a4;
    local_18 = (undefined4 *)*local_18;
  }
  else {
    appuStack_3c[0] = (undefined4 **)0x463923;
    appuStack_3c[0] = (undefined4 **)FUN_00463e5b();
    local_8._0_1_ = 3;
    FUN_0046e5fe();
    local_8._0_1_ = 2;
    appuStack_3c[0] = (undefined4 **)0x46393e;
    FUN_00463e49();
    appuStack_3c[0] = (undefined4 **)0x0;
    cVar1 = FUN_004631a5(&DAT_0091309c);
    while (cVar1 != '\0') {
      appuStack_3c[0] = &local_20;
      FUN_0046338e();
      appuStack_3c[0] = (undefined4 **)0x463964;
      FUN_0046e4a0();
      if (local_20 != (undefined4 *)0x0) {
        piVar2 = local_20 + 1;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          appuStack_3c[0] = (undefined4 **)0x1;
          (**(code **)*local_20)();
        }
      }
      if (local_18 == (undefined4 *)0x0) {
        appuStack_3c[0] = &local_20;
        FUN_0046537e();
        if (*(char *)*in_ECX == '\0') {
          FUN_00465317();
        }
        *param_1 = 0;
        appuStack_3c[0] = (undefined4 **)0x463a21;
        FUN_004652d6();
        local_8._0_1_ = 1;
        if (local_18 != (undefined4 *)0x0) {
          piVar2 = local_18 + 1;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            appuStack_3c[0] = (undefined4 **)0x1;
            (**(code **)*local_18)();
          }
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_18 = local_1c;
        if (local_1c == (undefined4 *)0x0) goto LAB_00463b9b;
        goto LAB_00463a4b;
      }
      appuStack_3c[0] = (undefined4 **)0x46398b;
      appuStack_3c[0] = (undefined4 **)FUN_00463e5b();
      local_8._0_1_ = 4;
      FUN_0046e5fe();
      local_8._0_1_ = 2;
      appuStack_3c[0] = (undefined4 **)0x4639a7;
      FUN_00463e49();
      appuStack_3c[0] = (undefined4 **)0x0;
      cVar1 = FUN_004631a5(&DAT_0091309c);
      puVar4 = local_1c;
    }
    appuStack_3c[0] = (undefined4 **)0x0;
    cVar1 = FUN_004631a5(&DAT_0090f544);
    if (cVar1 != '\0') goto LAB_00463879;
    appuStack_3c[0] = &local_20;
    FUN_0046537e();
    if (*(char *)*in_ECX == '\0') {
      FUN_00465317();
    }
    *param_1 = 0;
LAB_004638ea:
    appuStack_3c[0] = (undefined4 **)0x4638f2;
    FUN_004652d6();
    local_8._0_1_ = 1;
    if (local_18 != (undefined4 *)0x0) {
      piVar2 = local_18 + 1;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        appuStack_3c[0] = (undefined4 **)0x1;
        (**(code **)*local_18)();
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (puVar4 == (undefined4 *)0x0) goto LAB_004638a4;
    local_18 = (undefined4 *)*puVar4;
  }
  appuStack_3c[0] = (undefined4 **)0x1;
  (*(code *)*local_18)();
LAB_004638a4:
  appuStack_3c[0] = (undefined4 **)0x4638ac;
  FUN_004652d6();
  return param_1;
}

