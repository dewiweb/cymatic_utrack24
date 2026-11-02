// rea decompile_all
// name: FUN_00102934
// address: 0x102934
// body: available
// range: 0x102934-0x102a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x102a30 to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00102934(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_001a0700(param_1 + 300);
  iVar4 = FUN_0017bfc0();
  uVar2 = DAT_00102a34;
  uVar6 = *(uint *)(param_1 + 0x48);
  if (uVar6 != 0) {
    for (uVar5 = *(uint *)(uVar6 + 0x18); uVar5 != 0; uVar5 = *(uint *)(uVar5 + 0x18)) {
      uVar6 = uVar5;
    }
    while (uVar1 = uVar6, uVar1 != 0) {
      if (uVar1 == 0) {
        uVar6 = *(uint *)(param_1 + 0x48);
        if (uVar6 != 0) {
          uVar5 = *(uint *)(uVar6 + 0x18);
        }
        if (uVar6 != 0 && uVar5 != 0) {
          do {
            uVar6 = uVar5;
            uVar5 = *(uint *)(uVar6 + 0x18);
          } while (*(uint *)(uVar6 + 0x18) != 0);
        }
      }
      else {
        uVar5 = (uint)*(byte *)(uVar1 + 0x20);
        uVar6 = *(uint *)(uVar1 + 0x1c);
        uVar3 = uVar6;
        if ((*(byte *)(uVar1 + 0x20) & 0x80) == 0) {
          do {
            uVar6 = uVar3;
            if (uVar6 != 0) {
              uVar5 = *(uint *)(uVar6 + 0x18);
            }
            uVar3 = uVar5;
          } while (uVar6 != 0 && uVar5 != 0);
        }
      }
      uVar5 = iVar4 - *(int *)(uVar1 + 0x10);
      if (uVar2 < uVar5) {
        if (*(char *)(uVar1 + 0x14) != '\0') {
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        }
        uVar5 = FUN_001bf178(param_1 + 0x44,uVar1);
        if (uVar1 != 0) {
          FUN_000ea314(uVar1);
          uVar5 = FUN_0016d758();
        }
      }
    }
  }
  FUN_001a0d18(param_1 + 300);
  return;
}

