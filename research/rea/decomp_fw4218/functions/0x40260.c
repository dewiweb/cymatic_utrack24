// rea decompile_all
// name: FUN_00040260
// address: 0x40260
// body: available
// range: 0x40260-0x40393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00040260(int param_1,short *param_2,code *param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar4 = *(int *)(param_1 + 0x20);
  uVar1 = *(ushort *)(param_1 + 2);
  psVar5 = (short *)(iVar4 + 4);
  if (uVar1 != 0x15) {
    if (uVar1 < 0x16) {
      if (uVar1 == 0xc) {
LAB_000402c0:
        uVar2 = FUN_000400ea(psVar5);
        return uVar2;
      }
      if (uVar1 < 0xd) {
        if ((uVar1 == 2) || (uVar1 == 5)) goto LAB_000402c0;
        if (uVar1 != 6) goto LAB_000402b6;
        if (*(int *)(iVar4 + 0x204) != *(int *)(param_2 + 0x100)) {
          return 0;
        }
        if (*(int *)(iVar4 + 0x208) != *(int *)(param_2 + 0x102)) {
          return 0;
        }
        if (*(int *)(iVar4 + 0x20c) != *(int *)(param_2 + 0x104)) {
          return 0;
        }
        if (*(int *)(iVar4 + 0x210) != *(int *)(param_2 + 0x106)) {
          return 0;
        }
        if (*(int *)(iVar4 + 0x214) != *(int *)(param_2 + 0x108)) {
          return 0;
        }
        iVar3 = (*param_3)(psVar5,param_2);
        if (iVar3 == 0) {
          return 0;
        }
        iVar4 = (*param_3)(iVar4 + 0x104,param_2 + 0x80);
        goto joined_r0x0004033a;
      }
      if (uVar1 != 0xf) {
        if (uVar1 == 0x11) {
          iVar3 = (*param_3)(psVar5);
          if (iVar3 == 0) {
            return 0;
          }
          iVar4 = (*param_3)(iVar4 + 0x104,param_2 + 0x80);
          goto joined_r0x0004033a;
        }
        if (uVar1 != 0x12) goto LAB_000402b6;
      }
    }
    else {
      if (uVar1 == 0x27) goto LAB_000402c0;
      if (0x27 < uVar1) {
        if (uVar1 == 0x29) {
          return 0;
        }
        if (uVar1 == 0x2f) {
          uVar2 = FUN_001e5850(psVar5,param_2,0x20,param_1,param_4);
          return uVar2;
        }
LAB_000402b6:
        uVar2 = FUN_001e5850(psVar5,param_2,*(undefined2 *)(param_1 + 0xc),param_1,param_4);
        return uVar2;
      }
      if (uVar1 == 0x1a) {
        if (*psVar5 != *param_2) {
          return 0;
        }
        iVar3 = (*param_3)(iVar4 + 6,param_2 + 1);
        if (iVar3 != 0) {
          iVar4 = (*param_3)(iVar4 + 0x106,param_2 + 0x81);
          if (iVar4 != 0) {
            return 1;
          }
          return 0;
        }
        return 0;
      }
      if (uVar1 == 0x21) {
        if (*psVar5 != *param_2) {
          return 0;
        }
        if (*(short *)(iVar4 + 6) != param_2[1]) {
          return 0;
        }
        if (*(short *)(iVar4 + 8) != param_2[2]) {
          return 0;
        }
        iVar4 = (*param_3)(iVar4 + 10,param_2 + 3);
        goto joined_r0x0004033a;
      }
      if (uVar1 != 0x24) goto LAB_000402b6;
    }
  }
  if (*psVar5 != *param_2) {
    return 0;
  }
  iVar4 = (*param_3)(iVar4 + 6,param_2 + 1);
joined_r0x0004033a:
  if (iVar4 == 0) {
    return 0;
  }
  return 1;
}

