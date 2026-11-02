// rea decompile_all
// name: FUN_00106354
// address: 0x106354
// body: available
// range: 0x106354-0x10646f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00106354(int *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  piVar3 = DAT_00106470;
  iVar5 = 0;
  if (*param_1 != 0) {
    iVar5 = param_1[1];
  }
  uVar7 = 0;
  if (*param_1 != 0 && iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 0x5c);
    while (iVar2 = iVar4, iVar2 != 0) {
      iVar5 = iVar2;
      iVar4 = *(int *)(iVar2 + 0x5c);
    }
    while (iVar5 != 0) {
      if (*(int *)(iVar5 + 0xc) == param_2) {
        uVar7 = 1;
        uVar6 = *(byte *)(iVar5 + 0x58) & 0xf;
        piVar3[uVar6] = piVar3[uVar6] + -1;
        *(ushort *)(iVar5 + 0x58) = *(ushort *)(iVar5 + 0x58) & 0x1f0;
        *piVar3 = *piVar3 + 1;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        *(ushort *)(iVar5 + 0x58) = *(ushort *)(iVar5 + 0x58) | 0x40;
      }
      if (iVar5 == 0) {
        iVar5 = param_1[1];
        if (iVar5 == 0) break;
        for (iVar4 = *(int *)(iVar5 + 0x5c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x5c)) {
          iVar5 = iVar4;
        }
      }
      else {
        pbVar1 = (byte *)(iVar5 + 100);
        iVar5 = *(int *)(iVar5 + 0x60);
        iVar4 = iVar5;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            iVar5 = iVar4;
            if (iVar5 == 0) goto LAB_00106458;
            iVar4 = *(int *)(iVar5 + 0x5c);
          } while (*(int *)(iVar5 + 0x5c) != 0);
        }
      }
    }
  }
LAB_00106458:
  if (*piVar3 != 0) {
    FUN_00108484(param_1);
  }
  return uVar7;
}

