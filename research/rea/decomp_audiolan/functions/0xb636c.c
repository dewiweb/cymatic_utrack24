// rea decompile_all
// name: FUN_000b636c
// address: 0xb636c
// body: available
// range: 0xb636c-0xb64c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000b636c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = DAT_000b64c8;
  FUN_001a0700();
  iVar3 = FUN_00003570(param_2,DAT_000b64cc,5);
  uVar2 = DAT_000b64c8;
  if (iVar3 == 0) {
    FUN_001a0700();
    iVar3 = DAT_000b64d0;
    iVar7 = 0;
    do {
      piVar4 = *(int **)(iVar3 + iVar7 * 4);
      if (piVar4 != (int *)0x0) {
        uVar5 = (**(code **)(*piVar4 + 8))();
        iVar6 = FUN_00003960(uVar5,param_2 + 5);
        if (iVar6 == 0) {
          piVar4 = *(int **)(iVar3 + iVar7 * 4);
          FUN_001a0d18(uVar2);
          iVar3 = DAT_000b64d4;
          if (piVar4 == (int *)0x0) goto LAB_000b6428;
          iVar7 = 0;
          goto LAB_000b6454;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x14);
    FUN_001a0d18(uVar2);
  }
  goto LAB_000b6428;
  while (iVar7 = iVar7 + 1, iVar7 < 0x28) {
LAB_000b6454:
    if (*(int *)(DAT_000b64d4 + iVar7 * 4) == 0) {
      if ((iVar7 != -1) && (iVar6 = (**(code **)(*piVar4 + 0xc))(piVar4,iVar7,param_3), iVar6 != 0))
      {
        *(int **)(iVar3 + iVar7 * 4) = piVar4;
        FUN_001a0d18(uVar1);
        return iVar7;
      }
      break;
    }
  }
LAB_000b6428:
  FUN_001a0d18(uVar1);
  return -1;
}

