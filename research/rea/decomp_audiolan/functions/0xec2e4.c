// rea decompile_all
// name: FUN_000ec2e4
// address: 0xec2e4
// body: available
// range: 0xec2e4-0xec3b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000ec2e4(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (*(char *)((int)param_1 + 0x51) != '\0') {
    uVar1 = *(ushort *)(param_1 + 0x13);
    iVar3 = 4;
    if ((uVar1 & 0x100) != 0) {
      iVar3 = 8;
    }
    if (((uVar1 & 0x200) != 0) && (iVar3 = iVar3 + 0xc, (uVar1 & 0x10) == 0)) {
      iVar3 = iVar3 + ((uint)*(ushort *)((int)param_1 + 0x12) +
                      (uint)*(ushort *)((int)param_1 + 0x1a)) * 0xc + 4;
    }
    if ((uVar1 & 0x400) != 0 && (uVar1 & 0x20) != 0) {
      iVar2 = iVar3 + 4;
      if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
        iVar2 = iVar3 + 8;
      }
      iVar3 = iVar2;
      if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
        iVar3 = iVar3 + 8;
      }
    }
    piVar4 = (int *)*param_1;
    uVar5 = iVar3 + 4;
    while (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)*param_1;
      }
      else {
        piVar4 = (int *)piVar4[3];
      }
      uVar5 = iVar3 + uVar5 + 3 & 0xfffffffc;
    }
    param_1[0x11] = uVar5;
    *(undefined1 *)((int)param_1 + 0x51) = 0;
  }
  return param_1[0x11];
}

