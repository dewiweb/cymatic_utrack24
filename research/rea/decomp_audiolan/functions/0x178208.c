// rea decompile_all
// name: FUN_00178208
// address: 0x178208
// body: available
// range: 0x178208-0x17834b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00178208(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x94);
  do {
    if (iVar3 == 0) {
      return;
    }
    iVar7 = *(int *)(iVar3 + 0x20);
    iVar3 = *(int *)(iVar3 + 0x14);
joined_r0x0017821e:
    iVar2 = iVar3;
    iVar3 = iVar7;
  } while (iVar2 == 0);
  iVar3 = *(int *)(iVar2 + 0x38);
  bVar1 = false;
  uVar4 = FUN_001a4490(0);
  if (iVar2 != 0) {
    iVar8 = 0;
    iVar5 = FUN_001a4bc4(*(undefined4 *)(iVar2 + 0x28),0);
    while (iVar5 == 0) {
      iVar5 = FUN_001a4bdc(*(undefined4 *)(iVar2 + 0x28),iVar8);
      if (((bVar1) && (*(char *)(iVar5 + 0x2c) == '\x13')) &&
         (*(int *)(iVar5 + 0x30) + 0x1eU < uVar4)) {
        FUN_001a6d94(*(undefined4 *)(param_1 + 0xa4),iVar5);
        FUN_001a4cbc(*(undefined4 *)(iVar2 + 0x28),iVar8);
        FUN_001a4a80(param_1 + 0x9c,iVar5,0);
        break;
      }
      iVar6 = FUN_001a6f04(**(undefined4 **)(iVar5 + 0x1c),DAT_0017834c);
      if (iVar6 == 0) {
        bVar1 = true;
      }
      iVar5 = FUN_001a6f04(**(undefined4 **)(iVar5 + 0x1c),DAT_00178350);
      if (iVar5 == 0) {
        bVar1 = true;
      }
      iVar8 = iVar8 + 1;
      iVar5 = FUN_001a4bc4(*(undefined4 *)(iVar2 + 0x28),iVar8);
    }
    bVar1 = false;
    iVar8 = 0;
    iVar5 = FUN_001a4bc4(*(undefined4 *)(iVar2 + 0x2c),0);
    while (iVar5 == 0) {
      iVar5 = FUN_001a4bdc(*(undefined4 *)(iVar2 + 0x2c),iVar8);
      if (((bVar1) && (*(char *)(iVar5 + 0x2c) == '\x0e')) &&
         (*(int *)(iVar5 + 0x30) + 0x1eU < uVar4)) {
        FUN_001a6d94(*(undefined4 *)(param_1 + 0xa4),iVar5);
        FUN_001a4cbc(*(undefined4 *)(iVar2 + 0x2c),iVar8);
        FUN_001a4a80(param_1 + 0x9c,iVar5,0);
        break;
      }
      iVar6 = FUN_001a6f04(**(undefined4 **)(iVar5 + 0x1c),DAT_0017834c);
      if (iVar6 == 0) {
        bVar1 = true;
      }
      iVar5 = FUN_001a6f04(**(undefined4 **)(iVar5 + 0x1c),DAT_00178350);
      if (iVar5 == 0) {
        bVar1 = true;
      }
      iVar8 = iVar8 + 1;
      iVar5 = FUN_001a4bc4(*(undefined4 *)(iVar2 + 0x2c),iVar8);
    }
  }
  goto joined_r0x0017821e;
}

