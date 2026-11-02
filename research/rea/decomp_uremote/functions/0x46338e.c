// rea decompile_all
// name: FUN_0046338e
// address: 0x46338e
// body: available
// range: 0x46338e-0x463514 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0046338e(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_ECX;
  undefined4 **ppuStack_48;
  uint uStack_44;
  char local_31;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005db777;
  local_14 = ExceptionList;
  uStack_44 = DAT_00955fd4 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_14;
  local_20 = 0;
  ppuStack_48 = &local_30;
  local_2c = in_ECX;
  FUN_00463515(in_ECX);
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  while (puVar4 = local_30, local_30 != (undefined4 *)0x0) {
    ppuStack_48 = (undefined4 **)&local_31;
    cVar3 = FUN_004631a5(&DAT_00917354);
    if (cVar3 == '\0') break;
    ppuStack_48 = &local_28;
    FUN_00463515(local_2c);
    puVar2 = local_28;
    local_c._0_1_ = 1;
    if (local_28 == (undefined4 *)0x0) {
      ppuStack_48 = (undefined4 **)0x4634c1;
      uVar5 = FUN_00465544();
      local_1c = (undefined1 *)&ppuStack_48;
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_00465bec(&ppuStack_48,uVar5);
      ppuStack_48 = (undefined4 **)FUN_00465c6b(local_24);
      iVar6 = FUN_0046318f();
      *param_1 = iVar6;
      if (iVar6 != 0) {
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      }
      ppuStack_48 = (undefined4 **)0x463507;
      FUN_004652d6();
      ppuStack_48 = (undefined4 **)0x463510;
      FUN_004652d6();
      goto LAB_00463486;
    }
    ppuStack_48 = (undefined4 **)0x10;
    puVar4 = (undefined4 *)FUN_005af82d();
    if (local_31 == '+') {
      if (puVar4 != (undefined4 *)0x0) {
        ppuStack_48 = (undefined4 **)0x463430;
        FUN_00461e31();
        *puVar4 = juce::Expression::Helpers::Add::vftable;
      }
    }
    else if (puVar4 != (undefined4 *)0x0) {
      ppuStack_48 = (undefined4 **)0x463447;
      FUN_00461e31();
      *puVar4 = juce::Expression::Helpers::Subtract::vftable;
    }
    ppuStack_48 = (undefined4 **)0x46345c;
    FUN_0046e4a0();
    local_c._0_1_ = 0;
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ppuStack_48 = (undefined4 **)0x1;
      (**(code **)*puVar2)();
    }
  }
  *param_1 = (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = puVar4[1] + 1;
  }
LAB_00463486:
  local_c = 0xffffffff;
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ppuStack_48 = (undefined4 **)0x1;
      (**(code **)*puVar4)();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

