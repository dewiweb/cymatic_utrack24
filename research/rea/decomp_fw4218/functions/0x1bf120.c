// rea decompile_all
// name: FUN_001bf120
// address: 0x1bf120
// body: available
// range: 0x1bf120-0x1bf1ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001bf120(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = DAT_001bf1b0;
  iVar3 = DAT_001bf1b4 + DAT_001bf1b0 + -0x14;
  iVar6 = *(int *)(&stack0x00000014 + iVar3 + 0x14);
  uVar5 = *(undefined4 *)(&stack0x00000018 + iVar3 + 0x14);
  if (*param_1 == 0) {
    return;
  }
  puVar1 = &stack0xfffffff0 + DAT_001bf1b0;
  iVar3 = DAT_001bf1b4 + DAT_001bf1b0 + -0x14;
  *(undefined4 *)(&stack0xfffffff0 + iVar3 + 0x14) = param_2;
  *(undefined4 *)(&stack0xfffffff4 + iVar3 + 0x14) = 0;
  if (iVar6 == 8) {
    *(undefined4 *)(&stack0xffffffec + DAT_001bf1b0) = 1;
    cVar2 = (&stack0xffffffec)[DAT_001bf1b0];
  }
  else {
    if (iVar6 != 4) {
      if (iVar6 == 7) {
        *(undefined4 *)(&stack0xffffffec + DAT_001bf1b0) = 1;
        if ((&stack0xffffffec)[DAT_001bf1b0] == '\x01') {
          iVar6 = 5;
        }
        else {
          iVar6 = 6;
        }
      }
      else if (iVar6 == 0) {
        iVar6 = 1;
      }
      goto LAB_001bf18e;
    }
    *(undefined4 *)(&stack0xffffffec + DAT_001bf1b0) = 1;
    cVar2 = (&stack0xffffffec)[DAT_001bf1b0];
  }
  if (cVar2 == '\x01') {
    iVar6 = 2;
  }
  else {
    iVar6 = 3;
  }
LAB_001bf18e:
  (&stack0xfffffff8)[iVar3 + 0x14] = (char)iVar6;
  *(undefined4 *)(&stack0xffffffec + DAT_001bf1b0) = uVar5;
  FUN_00174954(puVar1,param_1);
  FUN_00176128(puVar1,puVar1,*(undefined4 *)(&stack0xfffffff4 + DAT_001bf1b4 + iVar4));
  return;
}

