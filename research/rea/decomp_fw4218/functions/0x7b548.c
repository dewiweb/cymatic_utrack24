// rea decompile_all
// name: FUN_0007b548
// address: 0x7b548
// body: available
// range: 0x7b548-0x7b6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_0007b548(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  
  piVar2 = (int *)param_1[3];
  puVar8 = (undefined1 *)0x0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 == (int *)0x0) {
      iVar3 = param_1[1] + 8;
      if (iVar3 < 1) {
        iVar3 = param_1[1];
      }
      else {
        param_1[1] = iVar3;
      }
      iVar9 = *param_1;
      if ((uint)(iVar9 * iVar3) < 0x800) {
        uVar4 = FUN_00006604(0x800,iVar9);
        param_1[1] = uVar4;
      }
      else {
        uVar4 = param_1[1];
      }
      if (0xff < uVar4) {
        uVar4 = 0xff;
        param_1[1] = 0xff;
      }
      iVar3 = iVar9 * uVar4 + 0x10;
      piVar2 = (int *)FUN_001f01e0(iVar3);
      if (piVar2 == (int *)0x0) {
        return (undefined1 *)0x0;
      }
      param_1[0xb] = param_1[0xb] + 1;
      param_1[8] = param_1[8] + iVar3;
      uVar4 = param_1[1];
      iVar3 = *param_1;
      uVar6 = uVar4 & 0xff;
      *piVar2 = 0;
      piVar2[1] = (int)(piVar2 + 4);
      piVar2[2] = (int)piVar2 + iVar3 * uVar6 + 0xf;
      *(undefined1 *)(piVar2 + 3) = 0;
      uVar1 = (undefined1)uVar4;
      *(undefined1 *)((int)piVar2 + 0xd) = uVar1;
      uVar4 = 0;
      *(undefined1 *)((int)piVar2 + 0xe) = uVar1;
      piVar7 = piVar2 + 4;
      if (uVar6 != 0) {
        do {
          uVar5 = uVar4 + 1;
          uVar4 = uVar5 & 0xff;
          *(char *)piVar7 = (char)uVar5;
          piVar7 = (int *)((int)piVar7 + iVar3);
        } while (uVar4 < uVar6);
      }
      param_1[3] = (int)piVar2;
      param_1[7] = param_1[1] + param_1[7];
      param_1[5] = param_1[5] + 1;
      param_1[6] = param_1[6] + param_1[1];
    }
    else {
      param_1[2] = *piVar2;
      *piVar2 = 0;
      param_1[3] = (int)piVar2;
    }
  }
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    puVar8 = (undefined1 *)((uint)*(byte *)(piVar2 + 3) * *param_1 + piVar2[1]);
    *(undefined1 *)(piVar2 + 3) = *puVar8;
    *(char *)((int)piVar2 + 0xd) = *(char *)((int)piVar2 + 0xd) + -1;
  }
  param_1[7] = param_1[7] + -1;
  if (*(char *)((int)piVar2 + 0xd) == '\0') {
    param_1[3] = *piVar2;
    *piVar2 = param_1[4];
    param_1[4] = (int)piVar2;
  }
  param_1[9] = param_1[9] + 1;
  return puVar8;
}

