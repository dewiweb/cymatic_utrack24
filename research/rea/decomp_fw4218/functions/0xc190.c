// rea decompile_all
// name: FUN_0000c190
// address: 0xc190
// body: available
// range: 0xc190-0xc39b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000c190(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 8) + 0x118;
  FUN_001f00bc();
  if (*(char *)(param_1 + 0x2d) != '\0') {
LAB_0000c1d4:
    FUN_001f06d4(iVar3);
    return 1;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    piVar5 = *(int **)(param_1 + 0x3c);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5,param_1,0);
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  else if (-1 < *(int *)(param_1 + 0x38)) {
    iVar8 = *(int *)(param_1 + 0x20);
    if (iVar8 == 0) goto LAB_0000c1d4;
    iVar4 = FUN_0000b174(param_1 + 4,param_2,param_3);
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar8 + 4), iVar4 != 0)) {
      iVar7 = 0;
      do {
        iVar1 = iVar7 * 0x14;
        iVar4 = iVar4 + -1;
        iVar7 = iVar7 + 1;
        *(undefined4 *)(iVar8 + iVar1 + 8) = 1;
      } while (iVar4 != 0);
      uVar2 = *(undefined1 *)(param_1 + 100);
      *(undefined1 *)(iVar8 + 0xd0) = uVar2;
      if (*(int *)(iVar8 + 0xcc) == 0) {
        iVar4 = FUN_001d0f38(s___USBMidiInStreamBlock_0000c3a2 + 2,*(undefined4 *)(iVar8 + 0xc),0x20
                             ,*(undefined4 *)(iVar8 + 0xd4),uVar2,*(undefined1 *)(iVar8 + 0xd9));
        *(int *)(iVar8 + 0xcc) = iVar4;
        if (iVar4 == 0) {
          piVar5 = *(int **)(param_1 + 0x3c);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5,param_1,4);
          }
          *(undefined1 *)(param_1 + 0x24) = 1;
          goto LAB_0000c22c;
        }
      }
      *(undefined1 *)(iVar8 + 0xd9) = 4;
      *(undefined1 *)(iVar8 + 0xb2) = 7;
      iVar4 = FUN_001df75c(iVar8);
      if (iVar4 == 0) {
        uVar6 = FUN_001df310(iVar8);
        *(undefined4 *)(param_1 + 0x2d0) = uVar6;
        *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(iVar8 + 0xcc);
        *(undefined1 *)(param_1 + 0x2d) = 1;
        goto LAB_0000c1d4;
      }
      piVar5 = *(int **)(param_1 + 0x3c);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5,param_1,2);
      }
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
  }
LAB_0000c22c:
  FUN_001f06d4(iVar3);
  return 0;
}

