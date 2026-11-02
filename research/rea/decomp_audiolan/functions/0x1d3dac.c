// rea decompile_all
// name: FUN_001d3dac
// address: 0x1d3dac
// body: available
// range: 0x1d3dac-0x1d3f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d3dac(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_r7;
  uint uVar6;
  bool bVar7;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x14);
  piVar2 = (int *)(param_1 + 0x10);
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar3 & 1;
    bVar7 = (*(ushort *)(param_1 + 0x14) & 1) != 0;
    if (bVar7) {
      unaff_r7 = *piVar2;
    }
    uVar1 = 0;
    if (bVar7) {
      do {
        if (*(int *)(unaff_r7 + uVar1 * 4) == param_2) goto LAB_001d3e34;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)uVar6);
    }
  }
  uVar1 = uVar6;
  if (uVar1 < uVar3) {
    do {
      if (*(int *)(*piVar2 + uVar1 * 4) == param_2) goto LAB_001d3e34;
      if (*(int *)(*piVar2 + uVar1 * 4 + 4) == param_2) {
        uVar1 = uVar1 + 1;
        goto LAB_001d3e34;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar3);
  }
LAB_001d3ee8:
  FUN_00134c48(*(undefined4 *)(param_1 + 4),param_2);
  iVar4 = *(int *)(param_2 + 0xc) + -1;
  *(int *)(param_2 + 0xc) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_2 + 4) = 0;
  }
  return;
LAB_001d3e34:
  if (-1 < (int)uVar1) {
    if (0 < (int)((uVar3 - uVar1) - 1)) {
      iVar4 = 0;
      if ((int)uVar1 < (int)(uVar3 - 1)) {
        uVar3 = ~(uVar3 - uVar1) & 1;
        if (uVar3 != 0) {
          iVar4 = 1;
          *(undefined4 *)(*piVar2 + uVar1 * 4) = *(undefined4 *)(*piVar2 + uVar1 * 4 + 4);
        }
      }
      else {
        uVar3 = 0;
      }
      if ((int)uVar3 < (int)((*(ushort *)(param_1 + 0x14) - uVar1) + -1)) {
        do {
          *(undefined4 *)(*piVar2 + (uVar1 + iVar4) * 4) =
               *(undefined4 *)(*piVar2 + (uVar1 + iVar4) * 4 + 4);
          iVar5 = uVar1 + iVar4 + 1;
          uVar3 = uVar3 + 2;
          *(undefined4 *)(*piVar2 + iVar5 * 4) = *(undefined4 *)(*piVar2 + iVar5 * 4 + 4);
          iVar4 = iVar4 + 2;
        } while ((int)uVar3 < (int)((*(ushort *)(param_1 + 0x14) - uVar1) + -1));
      }
    }
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + -1;
  }
  goto LAB_001d3ee8;
}

