// rea decompile_all
// name: FUN_00164f24
// address: 0x164f24
// body: available
// range: 0x164f24-0x16506b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x165068 to 0x1f06d4 FUN_001f06d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00164f24(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_00165598(param_1 + 0x80);
  }
  FUN_001f00bc(param_1 + 0x100);
  uVar6 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x70);
  FUN_001f06d4(param_1 + 0x100);
  if (0x10 < uVar6) {
    return;
  }
  FUN_001f00bc(param_1 + 300);
  uVar3 = DAT_0016506c;
  bVar7 = *(int *)(param_1 + 0x4c) != 0;
  if (bVar7) {
    uVar6 = *(uint *)(param_1 + 0x48);
  }
  if (bVar7 && uVar6 != 0) {
    uVar4 = *(uint *)(uVar6 + 0x18);
    while (uVar2 = uVar4, uVar2 != 0) {
      uVar6 = uVar2;
      uVar4 = *(uint *)(uVar2 + 0x18);
    }
    while (uVar6 != 0) {
      if ((*(char *)(uVar6 + 0x14) != '\0') &&
         (uVar4 = *(int *)(uVar6 + 0xc) + 1,
         iVar5 = FUN_0016657c(param_1,uVar6,
                              uVar4 + (int)((longlong)((ulonglong)uVar4 * (ulonglong)uVar3) >> 0x3f)
                                      * -0x10000000,0x2200), iVar5 != 0)) {
        *(undefined1 *)(uVar6 + 0x14) = 0;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      }
      if (uVar6 == 0) {
        uVar6 = *(uint *)(param_1 + 0x48);
        if (uVar6 == 0) break;
        for (uVar4 = *(uint *)(uVar6 + 0x18); uVar4 != 0; uVar4 = *(uint *)(uVar4 + 0x18)) {
          uVar6 = uVar4;
        }
      }
      else {
        pbVar1 = (byte *)(uVar6 + 0x20);
        uVar6 = *(uint *)(uVar6 + 0x1c);
        uVar4 = uVar6;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            uVar6 = uVar4;
            if (uVar6 == 0) goto LAB_00165060;
            uVar4 = *(uint *)(uVar6 + 0x18);
          } while (*(uint *)(uVar6 + 0x18) != 0);
        }
      }
    }
  }
LAB_00165060:
  FUN_001f06d4(param_1 + 300);
  return;
}

