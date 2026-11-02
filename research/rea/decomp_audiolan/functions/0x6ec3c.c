// rea decompile_all
// name: FUN_0006ec3c
// address: 0x6ec3c
// body: available
// range: 0x6ec3c-0x6ed1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0006ec3c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_r3;
  int iVar4;
  int local_14 [2];
  
  iVar2 = FUN_000dde00();
  FUN_001da408(local_14,iVar2 + 0x30);
  iVar2 = DAT_0006ed20;
  piVar1 = DAT_0006ed1c;
  iVar4 = *(int *)(local_14[0] + -0xc) + 1;
  if (iVar4 == 0) {
    if (in_r3 != local_14) {
      FUN_001da110(in_r3,0,*(undefined4 *)(*in_r3 + -4),local_14[0],
                   *(undefined4 *)(local_14[0] + -4),0,*(undefined4 *)(local_14[0] + -4));
    }
    goto LAB_0006ed08;
  }
  if ((int *)(local_14[0] + -0xc) != DAT_0006ed1c) {
    *(int *)(local_14[0] + -0xc) = iVar4;
  }
  if (*in_r3 != iVar2) {
    piVar3 = (int *)(*in_r3 + -0xc);
    iVar2 = *piVar3;
    if (iVar2 == -1) {
LAB_0006ecb8:
      FUN_0010fa20(*in_r3 + -0xc,*(int *)(*in_r3 + -8) + 0xe,0);
    }
    else if (piVar3 != piVar1) {
      *piVar3 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_0006ecb8;
    }
  }
  *in_r3 = local_14[0];
LAB_0006ed08:
  FUN_001da44c(local_14);
  return 1;
}

