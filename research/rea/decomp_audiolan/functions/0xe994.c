// rea decompile_all
// name: FUN_0000e994
// address: 0xe994
// body: available
// range: 0xe994-0xeb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000e994(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 8) + 0x118;
  FUN_001a0700();
  if (*(char *)(param_1 + 0x2d) != '\0') {
LAB_0000e9d8:
    FUN_001a0d18(iVar2);
    return 1;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    piVar4 = *(int **)(param_1 + 0x3c);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4,param_1,0);
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  else if (-1 < *(int *)(param_1 + 0x38)) {
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 == 0) goto LAB_0000e9d8;
    iVar3 = FUN_0000acc8(param_1 + 4,param_2,param_3);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar7 + 4), iVar3 != 0)) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 * 0x14;
        iVar3 = iVar3 + -1;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar7 + iVar1 + 8) = 1;
      } while (iVar3 != 0);
      *(undefined1 *)(iVar7 + 0xd0) = 1;
      if (*(int *)(iVar7 + 0xcc) == 0) {
        iVar3 = FUN_0017daa0(s_A_USBMidiOutStreamBlock_0000eba6 + 2,*(undefined4 *)(iVar7 + 0xc),
                             0xf0,*(undefined4 *)(iVar7 + 0xd4),1,*(undefined1 *)(iVar7 + 0xd9));
        *(int *)(iVar7 + 0xcc) = iVar3;
        if (iVar3 == 0) {
          piVar4 = *(int **)(param_1 + 0x3c);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 8))(piVar4,param_1,4);
          }
          *(undefined1 *)(param_1 + 0x24) = 1;
          goto LAB_0000ea30;
        }
      }
      *(undefined1 *)(iVar7 + 0xd9) = 2;
      *(undefined1 *)(iVar7 + 0xb2) = 7;
      iVar3 = FUN_0018e99c(iVar7);
      if (iVar3 == 0) {
        uVar5 = FUN_0018e5c0(iVar7);
        *(undefined4 *)(param_1 + 0x344) = uVar5;
        *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(iVar7 + 0xcc);
        *(undefined1 *)(param_1 + 0x2d) = 1;
        goto LAB_0000e9d8;
      }
      piVar4 = *(int **)(param_1 + 0x3c);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4,param_1,2);
      }
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
  }
LAB_0000ea30:
  FUN_001a0d18(iVar2);
  return 0;
}

