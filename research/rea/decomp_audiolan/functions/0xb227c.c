// rea decompile_all
// name: FUN_000b227c
// address: 0xb227c
// body: available
// range: 0xb227c-0xb23df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000b227c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *unaff_r8;
  int unaff_r9;
  undefined1 auStack_58 [8];
  int local_50;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  
  uVar1 = FUN_001b987c(auStack_30,0);
  FUN_0014f7b8(auStack_40,uVar1);
  FUN_001b98a8(auStack_30);
  iVar2 = FUN_0015c970(param_3);
  if (0 < iVar2) {
    unaff_r9 = DAT_000b23e4;
    unaff_r8 = DAT_000b23e0;
  }
  iVar6 = 0;
  iVar4 = 0;
  if (iVar2 != 0) {
    if (0 < iVar2) {
      do {
        FUN_000e1cfc(param_3,iVar6);
        FUN_0015c8fc(param_3,auStack_40);
        FUN_000a5a68(auStack_58,auStack_40);
        uVar1 = FUN_000034d0(param_2);
        iVar3 = local_50;
        if (local_50 == 0) {
          iVar3 = *unaff_r8;
        }
        iVar3 = FUN_00003570(param_2,iVar3,uVar1);
        if (iVar3 == 0) {
          iVar3 = FUN_00160a44(auStack_40);
          if (0x5f < iVar3 + iVar4) {
            FUN_000028a4(DAT_000b23e8);
            iVar4 = 0;
          }
          iVar3 = local_50;
          if (local_50 == 0) {
            iVar3 = *unaff_r8;
          }
          iVar3 = FUN_000028a4(DAT_000b23ec,iVar3);
          iVar4 = iVar4 + iVar3;
          iVar3 = (int)((ulonglong)((longlong)unaff_r9 * (longlong)iVar4) >> 0x20);
          iVar3 = -(iVar4 + ((iVar3 >> 3) - (iVar3 >> 0x1f)) * -0x14);
          uVar5 = iVar3 + 0x13;
          if (iVar3 != -0x14 && -2 < (int)uVar5) {
            do {
              FUN_000028a4(DAT_000b23f0);
              uVar5 = uVar5 - 1;
              iVar4 = iVar4 + 1;
            } while (uVar5 < 0x80000000);
          }
        }
        iVar6 = iVar6 + 1;
        FUN_001bbfc8(auStack_58);
      } while (iVar6 < iVar2);
      if (iVar4 != 0) {
        thunk_FUN_000028a4(DAT_000b23e8);
      }
    }
    FUN_0014f868(auStack_40);
    return iVar4;
  }
  FUN_0014f868(auStack_40);
  return 0;
}

