// rea decompile_all
// name: FUN_006bda00
// address: 0x6bda00
// body: available
// range: 0x6bda00-0x6bdcf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006bda00(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  undefined4 *local_48;
  int *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724d65;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) | 0x40;
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xef | 8;
  local_14 = in_ECX + 0x1e;
  local_8 = 0;
  *in_ECX = juce::DrawableText::vftable;
  FUN_0069e590();
  local_1c = in_ECX + 0x24;
  local_8._0_1_ = 1;
  FUN_006254f0();
  local_1c = in_ECX + 0x25;
  local_8._0_1_ = 2;
  FUN_006254f0();
  local_8._0_1_ = 3;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  local_1c = in_ECX + 0x2c;
  operator_new(0x28);
  iVar4 = FUN_00468990();
  in_ECX[0x2c] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 4;
  local_1c = in_ECX + 0x2d;
  operator_new(0x28);
  iVar4 = FUN_00468990();
  in_ECX[0x2d] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x2e] = &DAT_00bfe12c;
  local_8._0_1_ = 6;
  in_ECX[0x2f] = DAT_00c7ef90;
  in_ECX[0x30] = 0x21;
  FUN_0069f0a0();
  local_8._0_1_ = 7;
  FUN_0069f0a0();
  local_8._0_1_ = 8;
  FUN_0069f0a0();
  local_8._0_1_ = 9;
  FUN_0069f0a0();
  local_8._0_1_ = 10;
  FUN_0069f0a0();
  local_8._0_1_ = 0xb;
  FUN_0069f0a0();
  piVar2 = local_1c;
  local_48 = local_20;
  if (local_20 != (undefined4 *)0x0) {
    local_20[1] = local_20[1] + 1;
  }
  local_44 = local_1c;
  if (local_1c != (int *)0x0) {
    local_1c[1] = local_1c[1] + 1;
  }
  local_40 = local_28;
  if (local_28 != (undefined4 *)0x0) {
    local_28[1] = local_28[1] + 1;
  }
  local_3c = local_24;
  if (local_24 != (undefined4 *)0x0) {
    local_24[1] = local_24[1] + 1;
  }
  local_38 = local_30;
  if (local_30 != (undefined4 *)0x0) {
    local_30[1] = local_30[1] + 1;
  }
  local_34 = local_2c;
  if (local_2c != (undefined4 *)0x0) {
    local_2c[1] = local_2c[1] + 1;
  }
  local_8 = CONCAT31(local_8._1_3_,0xd);
  cVar3 = FUN_0069e2c0(&local_48);
  if (cVar3 == '\0') {
    FUN_004918d0(&local_48);
    FUN_006bd3a0();
  }
  FUN_0069e440();
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar2)(1);
    }
  }
  if (local_20 != (undefined4 *)0x0) {
    piVar2 = local_20 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*local_20)(1);
    }
  }
  if (local_24 != (undefined4 *)0x0) {
    piVar2 = local_24 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*local_24)(1);
    }
  }
  if (local_28 != (undefined4 *)0x0) {
    piVar2 = local_28 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*local_28)(1);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  if (local_2c != (undefined4 *)0x0) {
    piVar2 = local_2c + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*local_2c)(1);
    }
  }
  if (local_30 != (undefined4 *)0x0) {
    piVar2 = local_30 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*local_30)(1);
    }
  }
  operator_new(0x28);
  puVar5 = (undefined4 *)FUN_00468a40(0);
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    puVar5[1] = puVar5[1] + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,0xe);
  local_14 = puVar5;
  FUN_006bd5c0(&local_14,1);
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = puVar5 + 1;
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return local_18;
}

