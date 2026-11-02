// rea decompile_all
// name: FUN_0003f53c
// address: 0x3f53c
// body: available
// range: 0x3f53c-0x3f5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003f53c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int extraout_r1;
  undefined4 extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar3;
  uint uVar4;
  
  piVar1 = DAT_0003f5ec;
  iVar2 = *DAT_0003f5ec * *(int *)(param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 0x30) + iVar2;
  *(int *)(param_2 + 0x38) = iVar3;
  if ((*(int *)(param_2 + 0x40) != 0) && (uVar4 = *(uint *)(param_2 + 0x44), uVar4 < 4)) {
    FUN_0016db0c(iVar2);
    *(uint *)(param_2 + 0x38) = iVar3 - (4 - uVar4) * extraout_r1;
    FUN_0016dcb4(iVar2);
    iVar2 = FUN_0019560c(extraout_r1_00);
    *(int *)(param_2 + 0x38) = iVar2 + *(int *)(param_2 + 0x38);
  }
  FUN_000209c2(*(undefined4 *)(param_2 + 0x20));
  iVar2 = FUN_0016dc78();
  if (*(int *)(param_2 + 0x40) == 0) {
    iVar3 = *piVar1 * 0x3c;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if (*(uint *)(param_2 + 0x44) < 4) {
      FUN_0016db6c(*piVar1 * uVar4);
      iVar3 = extraout_r1_01;
    }
    else if (uVar4 < 0xb) {
      if (uVar4 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_0016da64(*piVar1);
        iVar3 = extraout_r1_02;
      }
    }
    else {
      iVar3 = *piVar1;
    }
  }
  iVar3 = iVar3 + *(int *)(param_2 + 0x38);
  iVar2 = iVar2 * 4 + param_1;
  if (0 < *(int *)(iVar2 + 0x928) - iVar3) {
    *(int *)(iVar2 + 0x928) = iVar3;
  }
  if (0 < *(int *)(param_1 + 0xf0) - iVar3) {
    *(int *)(param_1 + 0xf0) = iVar3;
  }
  return;
}

