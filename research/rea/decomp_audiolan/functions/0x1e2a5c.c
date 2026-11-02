// rea decompile_all
// name: FUN_001e2a5c
// address: 0x1e2a5c
// body: available
// range: 0x1e2a5c-0x1e2f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001e2a5c(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint local_44;
  uint local_40;
  undefined4 *local_3c;
  int local_38;
  undefined4 *puStack_30;
  int *piStack_2c;
  int *local_28;
  
  piVar1 = DAT_001e2f10;
  iVar9 = *param_2;
  uVar2 = *(uint *)(iVar9 + -4);
  piVar11 = DAT_001e2f10 + 3;
  piVar3 = piVar11;
  local_3c = param_1;
  puStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  if (uVar2 != 0) {
    puVar4 = &local_40;
    if (0x80 < uVar2) {
      puVar4 = &local_44;
    }
    local_44 = uVar2;
    local_40 = 0x80;
    uVar8 = *puVar4;
    if (0xfffffff1 < uVar8) {
      FUN_0010f7cc(8,DAT_001e2f14,DAT_001e2f14,uVar8);
    }
    if (uVar8 < uVar2) {
      FUN_0010f7cc(8,DAT_001e2f14,DAT_001e2f14,uVar2);
    }
    piVar3 = piVar1;
    if (uVar8 != 0) {
      piVar3 = (int *)FUN_0010f82c(uVar8 + 0xe,0);
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
      }
      piVar3[2] = uVar2;
      piVar3[1] = uVar8;
      puVar6 = (undefined1 *)((int)piVar3 + uVar2 + 0xc);
      *piVar3 = 0;
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0;
      }
    }
    piVar3 = piVar3 + 3;
  }
  FUN_00003628(piVar3,iVar9,uVar2);
  uVar2 = piVar3[-1];
  iVar9 = FUN_000034d0(local_28);
  piVar7 = local_28;
  if ((uint)piVar3[-1] < uVar2) {
    FUN_0010f7cc(9,&DAT_001e2f18,&DAT_001e2f18,uVar2);
  }
  if (-iVar9 - 0xfU < (uint)piVar3[-1]) {
    FUN_0010f7cc(8,&DAT_001e2f18,&DAT_001e2f18);
  }
  uVar8 = piVar3[-1];
  uVar10 = uVar8 + iVar9;
  if (uVar10 == 0) {
    piVar7 = piVar11;
    if (piVar3 != piVar11) {
      iVar9 = piVar3[-3];
      if ((iVar9 == -1) || ((piVar3 + -3 != piVar1 && (piVar3[-3] = iVar9 + -1, iVar9 == 0)))) {
        FUN_0010fa20(piVar3 + -3,piVar3[-2] + 0xe,0);
      }
    }
  }
  else {
    local_38 = uVar8 - uVar2;
    if (((piVar3[-3] + 1U < 2) && (uVar10 <= (uint)piVar3[-2])) &&
       ((piVar7 == (int *)0x0 || ((piVar7 < piVar3 || ((int *)((int)piVar3 + uVar8) <= piVar7))))))
    {
      if (local_38 != 0) {
        FUN_000036fc((int)piVar3 + uVar2 + iVar9,(int)piVar3 + uVar2,local_38);
      }
      if (iVar9 != 0) {
        FUN_000036fc((int)piVar3 + uVar2,piVar7,iVar9);
      }
      piVar3[-1] = uVar10;
      *(undefined1 *)((int)piVar3 + uVar10) = 0;
      piVar7 = piVar3;
    }
    else {
      local_44 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (local_44 < uVar8 + 0x80) {
        local_44 = uVar8 + 0x80;
      }
      local_40 = uVar10;
      puVar4 = &local_44;
      if (local_44 < uVar10) {
        puVar4 = &local_40;
      }
      uVar8 = *puVar4;
      if (0xfffffff1 < uVar8) {
        FUN_0010f7cc(8,DAT_001e2f14,DAT_001e2f14,uVar8);
      }
      if (uVar8 < uVar10) {
        FUN_0010f7cc(8,DAT_001e2f14,DAT_001e2f14,uVar10);
      }
      piVar5 = piVar1;
      if (uVar8 != 0) {
        piVar5 = (int *)FUN_0010f82c(uVar8 + 0xe,0);
        if (piVar5 != (int *)0x0) {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
        }
        piVar5[2] = uVar10;
        *piVar5 = 0;
        piVar5[1] = uVar8;
        puVar6 = (undefined1 *)((int)piVar5 + uVar10 + 0xc);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
        }
      }
      if (uVar2 != 0) {
        FUN_00003628(piVar5 + 3,piVar3,uVar2);
      }
      if (iVar9 != 0) {
        FUN_00003628((int)piVar5 + uVar2 + 0xc,piVar7,iVar9);
      }
      if (local_38 != 0) {
        FUN_00003628((int)piVar5 + iVar9 + uVar2 + 0xc,(int)piVar3 + uVar2,local_38);
      }
      if (piVar3 != piVar11) {
        iVar9 = piVar3[-3];
        if ((iVar9 == -1) || ((piVar3 + -3 != piVar1 && (piVar3[-3] = iVar9 + -1, iVar9 == 0)))) {
          FUN_0010fa20(piVar3 + -3,piVar3[-2] + 0xe,0);
        }
      }
      piVar7 = piVar5 + 3;
    }
  }
  if (piVar7[-3] == -1) {
    uVar2 = piVar7[-1];
    if (0xfffffff1 < uVar2) {
      FUN_0010f7cc(8,DAT_001e2f14,DAT_001e2f14,uVar2);
    }
    piVar3 = piVar1;
    if (uVar2 != 0) {
      piVar3 = (int *)FUN_0010f82c(uVar2 + 0xe,0);
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
      }
      piVar3[2] = uVar2;
      *piVar3 = 0;
      piVar3[1] = uVar2;
      puVar6 = (undefined1 *)((int)piVar3 + uVar2 + 0xc);
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0;
      }
    }
    *local_3c = piVar3 + 3;
    FUN_00003628(piVar3 + 3,piVar7,uVar2);
  }
  else {
    piVar3 = piVar7 + -3;
    *local_3c = piVar7;
    if (piVar3 != piVar1) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (piVar7 == piVar11) {
    return;
  }
  iVar9 = piVar7[-3];
  if (iVar9 != -1) {
    if (piVar7 + -3 == piVar1) {
      return;
    }
    piVar7[-3] = iVar9 + -1;
    if (iVar9 != 0) {
      return;
    }
  }
  FUN_0016d758(piVar7 + -3,piVar7[-2] + 0xe,0);
  return;
}

