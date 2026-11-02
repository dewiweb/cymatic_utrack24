// rea decompile_all
// name: FUN_001346f8
// address: 0x1346f8
// body: available
// range: 0x1346f8-0x1348f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001346f8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  if (*(char *)((int)param_2 + 0x6d) != 'a') {
    return;
  }
  if (*(char *)((int)param_2 + 0xde) == -0x7e) {
    if (param_2[0x38] == 0) {
      return;
    }
    (**(code **)(*param_2 + 0x6c))(auStack_38);
    FUN_0010f5fc(auStack_28,auStack_38);
    iVar1 = FUN_00146600(param_2[0x38]);
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_0016d774(iVar1 * 0x18,DAT_001348f4);
      if ((iVar2 == 0) || (iVar4 = FUN_0016dd70(iVar2,DAT_001348fc,0x18,iVar1), iVar4 == 0)) {
        iVar1 = 0;
      }
      else {
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            FUN_0014620c(param_2[0x38],iVar4 + iVar2 * 0x18);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
      }
    }
    FUN_000fb7b8(param_1);
    uVar3 = FUN_0015e010(param_1);
    FUN_0012909c(*(undefined4 *)(param_1 + 0x60),uVar3,auStack_28,iVar1);
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    if (*(char *)((int)param_2 + 0xde) != -0x7d) {
      return;
    }
    if (param_2[0x38] == 0) {
      return;
    }
    (**(code **)(*param_2 + 0x6c))(auStack_38);
    FUN_0010f5fc(auStack_28,auStack_38);
    iVar1 = FUN_00146600(param_2[0x38]);
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_0016d774(iVar1 * 10,DAT_001348f4);
      if ((iVar2 == 0) || (iVar4 = FUN_0016dd70(iVar2,DAT_001348f8,10,iVar1), iVar4 == 0)) {
        iVar1 = 0;
      }
      else {
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            FUN_00146304(param_2[0x38],iVar4 + iVar2 * 10);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
      }
    }
    FUN_000fb7b8(param_1);
    uVar3 = FUN_0015e010(param_1);
    FUN_00129364(*(undefined4 *)(param_1 + 0x60),uVar3,auStack_28,iVar1);
    if (iVar4 == 0) {
      return;
    }
  }
  FUN_0016d744(iVar4);
  return;
}

