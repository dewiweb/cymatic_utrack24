// rea decompile_all
// name: FUN_006c5460
// address: 0x6c5460
// body: available
// range: 0x6c5460-0x6c57a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c5460(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *in_ECX;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725d2b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) | 0x40;
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xef | 8;
  local_8 = 0;
  *in_ECX = juce::DrawableComposite::vftable;
  FUN_0069f0a0();
  local_8._0_1_ = 1;
  FUN_0069f0a0();
  local_8._0_1_ = 2;
  FUN_0069f0a0();
  local_8._0_1_ = 3;
  FUN_0069f0a0();
  local_8._0_1_ = 4;
  FUN_0069f0a0();
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_0069f0a0();
  in_ECX[0x1e] = local_34;
  if (local_34 != (undefined4 *)0x0) {
    local_34[1] = local_34[1] + 1;
  }
  in_ECX[0x1f] = local_30;
  if (local_30 != (undefined4 *)0x0) {
    local_30[1] = local_30[1] + 1;
  }
  in_ECX[0x20] = local_2c;
  if (local_2c != (undefined4 *)0x0) {
    local_2c[1] = local_2c[1] + 1;
  }
  in_ECX[0x21] = local_28;
  if (local_28 != (undefined4 *)0x0) {
    local_28[1] = local_28[1] + 1;
  }
  in_ECX[0x22] = local_24;
  if (local_24 != (undefined4 *)0x0) {
    local_24[1] = local_24[1] + 1;
  }
  in_ECX[0x23] = local_20;
  if (local_20 != (undefined4 *)0x0) {
    local_20[1] = local_20[1] + 1;
  }
  if (local_30 != (undefined4 *)0x0) {
    piVar3 = local_30 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_30)(1);
    }
  }
  if (local_34 != (undefined4 *)0x0) {
    piVar3 = local_34 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_34)(1);
    }
  }
  if (local_28 != (undefined4 *)0x0) {
    piVar3 = local_28 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_28)(1);
    }
  }
  if (local_2c != (undefined4 *)0x0) {
    piVar3 = local_2c + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_2c)(1);
    }
  }
  if (local_20 != (undefined4 *)0x0) {
    piVar3 = local_20 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_20)(1);
    }
  }
  if (local_24 != (undefined4 *)0x0) {
    piVar3 = local_24 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_24)(1);
    }
  }
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  local_8._0_1_ = 10;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  local_14 = (int *)FUN_0069f0a0();
  local_8._0_1_ = 0xb;
  piVar3 = (int *)FUN_0069f0a0();
  local_8._0_1_ = 0xc;
  piVar4 = (int *)FUN_0069f0a0();
  local_8._0_1_ = 0xd;
  piVar5 = (int *)FUN_0069f0a0();
  local_48 = (undefined4 *)*piVar5;
  if (local_48 != (undefined4 *)0x0) {
    local_48[1] = local_48[1] + 1;
  }
  puVar1 = (undefined4 *)*piVar4;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = puVar1[1] + 1;
  }
  puVar2 = (undefined4 *)*piVar3;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = puVar2[1] + 1;
  }
  local_3c = (undefined4 *)*local_14;
  if (local_3c != (undefined4 *)0x0) {
    local_3c[1] = local_3c[1] + 1;
  }
  local_8 = CONCAT31(local_8._1_3_,0xf);
  local_44 = puVar1;
  local_40 = puVar2;
  local_18 = local_48;
  local_14 = local_3c;
  FUN_006c4eb0(&local_48);
  if (local_14 != (undefined4 *)0x0) {
    piVar3 = local_14 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_14)(1);
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = puVar2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = puVar1 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  if (local_18 != (undefined4 *)0x0) {
    piVar3 = local_18 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_18)(1);
    }
  }
  if (local_1c != (undefined4 *)0x0) {
    piVar3 = local_1c + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_1c)(1);
    }
  }
  if (local_20 != (undefined4 *)0x0) {
    piVar3 = local_20 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_20)(1);
    }
  }
  if (local_28 != (undefined4 *)0x0) {
    piVar3 = local_28 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_28)(1);
    }
  }
  if (local_30 != (undefined4 *)0x0) {
    piVar3 = local_30 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_30)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

