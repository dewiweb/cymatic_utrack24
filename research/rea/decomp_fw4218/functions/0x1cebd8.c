// rea decompile_all
// name: FUN_001cebd8
// address: 0x1cebd8
// body: available
// range: 0x1cebd8-0x1cef8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001cebd8(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = DAT_001cef90;
  if (param_2 == (undefined4 *)0x0) {
    thunk_EXT_FUN_0040001c();
    *piVar1 = *piVar1 + 1;
    *(undefined2 *)(param_1 + 0x30) = 1;
    thunk_EXT_FUN_00400034();
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar7 = *(int *)(param_1 + 0x28);
    while (iVar3 != 0) {
      thunk_EXT_FUN_0040001c();
      *(undefined4 *)(iVar7 + 0x74) = 0;
      *piVar1 = *piVar1 + 1;
      thunk_EXT_FUN_00400034();
      FUN_001d0878(iVar7 + 0x58);
      *(undefined4 *)(iVar7 + 0x58) = 0;
      *(undefined4 *)(iVar7 + 0x90) = 0x1c;
      iVar7 = *(int *)(iVar7 + 0x7c);
      FUN_001cfeb8(*(undefined4 *)(iVar7 + 0x80));
      iVar3 = *(int *)(param_1 + 0x2c) + -1;
      *(int *)(param_1 + 0x2c) = iVar3;
    }
    thunk_EXT_FUN_0040001c();
    *piVar1 = *piVar1 + -1;
    thunk_EXT_FUN_00400034();
    return 0;
  }
  uVar2 = thunk_EXT_FUN_0040001c();
  *(undefined2 *)(param_1 + 0x30) = 1;
  if (*(int *)(param_1 + 0x14) == 0) {
    if (param_3 != 0) {
      iVar7 = *DAT_001cef94;
      *(undefined4 *)(iVar7 + 0x74) = DAT_001cef98;
      *(int *)(iVar7 + 0x78) = param_1;
      *(undefined4 **)(iVar7 + 0x88) = param_2;
      if (*(int *)(param_1 + 0x28) == 0) {
        *(int *)(param_1 + 0x28) = iVar7;
        *(int *)(iVar7 + 0x7c) = iVar7;
        *(int *)(iVar7 + 0x80) = iVar7;
      }
      else {
        *(int *)(iVar7 + 0x7c) = *(int *)(param_1 + 0x28);
        *(undefined4 *)(iVar7 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x80);
        *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x80) + 0x7c) = iVar7;
        *(int *)(*(int *)(param_1 + 0x28) + 0x80) = iVar7;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      *(undefined4 *)(iVar7 + 0x3c) = 5;
      *(undefined4 *)(iVar7 + 0x44) = 1;
      *(int *)(iVar7 + 0x58) = param_3;
      *piVar1 = *piVar1 + 1;
      thunk_EXT_FUN_00400034(uVar2);
      if (param_3 != -1) {
        FUN_001d06c8(iVar7 + 0x58);
      }
      FUN_001d01e0(iVar7);
      return *(undefined4 *)(iVar7 + 0x90);
    }
    uVar6 = 0xb;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x28);
    if (iVar7 != 0) {
      if (*(int *)(iVar7 + 0x7c) == iVar7) {
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      else {
        *(int *)(param_1 + 0x28) = *(int *)(iVar7 + 0x7c);
        *(undefined4 *)(*(int *)(iVar7 + 0x7c) + 0x80) = *(undefined4 *)(iVar7 + 0x80);
        *(undefined4 *)(*(int *)(iVar7 + 0x80) + 0x7c) = *(undefined4 *)(iVar7 + 0x7c);
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      *(undefined4 *)(iVar7 + 0x74) = 0;
      *piVar1 = *piVar1 + 1;
      thunk_EXT_FUN_00400034(uVar2);
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 1) {
        **(undefined4 **)(iVar7 + 0x88) = *param_2;
      }
      else if (iVar3 == 2) {
        uVar2 = param_2[1];
        puVar5 = *(undefined4 **)(iVar7 + 0x88);
        *puVar5 = *param_2;
        puVar5[1] = uVar2;
      }
      else if (iVar3 == 4) {
        uVar2 = param_2[1];
        uVar6 = param_2[2];
        uVar9 = param_2[3];
        puVar5 = *(undefined4 **)(iVar7 + 0x88);
        *puVar5 = *param_2;
        puVar5[1] = uVar2;
        puVar5[2] = uVar6;
        puVar5[3] = uVar9;
      }
      else if (iVar3 == 8) {
        FUN_001f323c(param_2,*(undefined4 *)(iVar7 + 0x88));
      }
      else {
        FUN_001f321c();
      }
      if (*(int *)(iVar7 + 0x70) == 0) {
        *(undefined4 *)(iVar7 + 0x58) = 0;
      }
      else {
        FUN_001d0878(iVar7 + 0x58);
      }
      *(undefined4 *)(iVar7 + 0x90) = 0;
      thunk_EXT_FUN_0040001c();
      *piVar1 = *piVar1 + 1;
      *(undefined2 *)(param_1 + 0x30) = 1;
      thunk_EXT_FUN_00400034();
      iVar4 = *(int *)(param_1 + 0x2c);
      iVar3 = *(int *)(param_1 + 0x28);
      while (iVar4 != 0) {
        thunk_EXT_FUN_0040001c();
        *(undefined4 *)(iVar3 + 0x74) = 0;
        *piVar1 = *piVar1 + 1;
        thunk_EXT_FUN_00400034();
        FUN_001d0878(iVar3 + 0x58);
        *(undefined4 *)(iVar3 + 0x58) = 0;
        *(undefined4 *)(iVar3 + 0x90) = 0x1c;
        iVar3 = *(int *)(iVar3 + 0x7c);
        FUN_001cfeb8(*(undefined4 *)(iVar3 + 0x80));
        iVar4 = *(int *)(param_1 + 0x2c) + -1;
        *(int *)(param_1 + 0x2c) = iVar4;
      }
      thunk_EXT_FUN_0040001c();
      *piVar1 = *piVar1 + -1;
      thunk_EXT_FUN_00400034();
      iVar7 = FUN_001cfeb8(iVar7);
      if (iVar7 != 0) {
        FUN_00011ef4();
      }
      return 0;
    }
    iVar7 = *(int *)(param_1 + 8);
    puVar5 = *(undefined4 **)(param_1 + 0x24);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    if (iVar7 == 1) {
      *puVar5 = *param_2;
      puVar5 = puVar5 + 1;
    }
    else if (iVar7 == 2) {
      uVar6 = param_2[1];
      *puVar5 = *param_2;
      puVar5[1] = uVar6;
      puVar5 = puVar5 + 2;
    }
    else if (iVar7 == 4) {
      uVar6 = param_2[1];
      uVar9 = param_2[2];
      uVar8 = param_2[3];
      *puVar5 = *param_2;
      puVar5[1] = uVar6;
      puVar5[2] = uVar9;
      puVar5[3] = uVar8;
      puVar5 = puVar5 + 4;
    }
    else if (iVar7 == 8) {
      puVar5 = (undefined4 *)FUN_001f3204(param_2);
    }
    else {
      puVar5 = (undefined4 *)FUN_001f31e0();
    }
    if (*(undefined4 **)(param_1 + 0x1c) <= puVar5) {
      puVar5 = *(undefined4 **)(param_1 + 0x18);
    }
    *(undefined4 **)(param_1 + 0x24) = puVar5;
    uVar6 = 0;
  }
  thunk_EXT_FUN_00400034(uVar2);
  return uVar6;
}

