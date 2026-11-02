// rea decompile_all
// name: FUN_00118670
// address: 0x118670
// body: available
// range: 0x118670-0x11875f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00118670(int *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((uint)(param_2 - param_1[3]) < 0xe6) {
    return;
  }
  param_1[3] = param_2;
  iVar4 = param_1[6];
  if (iVar4 == 0) {
    return;
  }
  for (iVar2 = *(int *)(iVar4 + 0x18); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = iVar2;
  }
  if (iVar4 != 0) {
    do {
      iVar2 = *(int *)(iVar4 + 0x14);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = param_2 - iVar2;
      }
      if (iVar2 != 0 && 500 < uVar3) {
        *(undefined2 *)(iVar4 + 0xc) = 0;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        *(undefined4 *)(iVar4 + 0x14) = 0;
        FUN_001221c8(*param_1 + 0x58c);
      }
      if (iVar4 == 0) {
        iVar4 = param_1[6];
        if (iVar4 == 0) {
          return;
        }
        for (iVar2 = *(int *)(iVar4 + 0x18); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
          iVar4 = iVar2;
        }
      }
      else {
        pbVar1 = (byte *)(iVar4 + 0x20);
        iVar4 = *(int *)(iVar4 + 0x1c);
        iVar2 = iVar4;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            iVar4 = iVar2;
            if (iVar4 == 0) {
              return;
            }
            iVar2 = *(int *)(iVar4 + 0x18);
          } while (*(int *)(iVar4 + 0x18) != 0);
        }
      }
    } while (iVar4 != 0);
    return;
  }
  return;
}

