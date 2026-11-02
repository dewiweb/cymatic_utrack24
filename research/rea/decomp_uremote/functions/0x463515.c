// rea decompile_all
// name: FUN_00463515
// address: 0x463515
// body: available
// range: 0x463515-0x46364f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_00463515(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 **appuStack_40 [6];
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined4 *local_1c;
  undefined4 *local_18;
  char local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x463521;
  local_24 = 0;
  appuStack_40[0] = &local_18;
  FUN_00463650();
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  while (puVar4 = local_18, local_18 != (undefined4 *)0x0) {
    appuStack_40[0] = (undefined4 **)local_11;
    cVar3 = FUN_004631a5(&DAT_0091728c);
    if (cVar3 == '\0') break;
    appuStack_40[0] = &local_1c;
    FUN_00463650();
    puVar2 = local_1c;
    local_8._0_1_ = 1;
    if (local_1c == (undefined4 *)0x0) {
      appuStack_40[0] = (undefined4 **)0x463605;
      uVar5 = FUN_00465544();
      local_28 = (undefined1 *)appuStack_40;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00465bec(appuStack_40,uVar5);
      appuStack_40[0] = (undefined4 **)FUN_00465c6b(local_20);
      iVar6 = FUN_0046318f();
      *param_2 = iVar6;
      if (iVar6 != 0) {
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      }
      appuStack_40[0] = (undefined4 **)0x463646;
      FUN_004652d6();
      appuStack_40[0] = (undefined4 **)0x46364e;
      FUN_004652d6();
      goto LAB_004635da;
    }
    appuStack_40[0] = (undefined4 **)0x10;
    puVar4 = (undefined4 *)FUN_005af82d();
    if (local_11[0] == '*') {
      if (puVar4 != (undefined4 *)0x0) {
        appuStack_40[0] = (undefined4 **)0x463587;
        FUN_00461e31();
        *puVar4 = juce::Expression::Helpers::Multiply::vftable;
      }
    }
    else if (puVar4 != (undefined4 *)0x0) {
      appuStack_40[0] = (undefined4 **)0x46359e;
      FUN_00461e31();
      *puVar4 = juce::Expression::Helpers::Divide::vftable;
    }
    appuStack_40[0] = (undefined4 **)0x4635b2;
    FUN_0046e4a0();
    local_8._0_1_ = 0;
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      appuStack_40[0] = (undefined4 **)0x1;
      (**(code **)*puVar2)();
    }
  }
  *param_2 = (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = puVar4[1] + 1;
  }
LAB_004635da:
  local_8 = 0xffffffff;
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      appuStack_40[0] = (undefined4 **)0x1;
      (**(code **)*puVar4)();
    }
  }
  return param_2;
}

