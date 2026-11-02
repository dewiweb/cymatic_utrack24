// rea decompile_all
// name: FUN_0011ca00
// address: 0x11ca00
// body: available
// range: 0x11ca00-0x11cb1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011ca00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,char *param_7)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  piVar2 = (int *)FUN_0012ac8c(*(int *)(param_1 + 0x24) + 0x90);
  if (piVar2 == (int *)0x0) {
    return;
  }
  while (iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2), iVar3 != param_2) {
    piVar2 = (int *)FUN_0012ab60(*(int *)(param_1 + 0x24) + 0x90,piVar2);
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2);
    if (iVar3 != 0) {
      FUN_0011c594(param_1,param_2,param_3,param_4);
      uVar1 = *(ushort *)(iVar3 + 6);
      pcVar4 = (char *)(uVar1 + 1);
      *(short *)(iVar3 + 6) = (short)pcVar4;
      if (param_7 == (char *)0x0) {
        pcVar4 = s_Commit_changes_0011cb20;
      }
      if (param_7 != (char *)0x0) {
        pcVar4 = param_7;
      }
      piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(piVar2,pcVar4,(uint)uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0011cafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 0x1c))
                ((int)piVar2 + *(int *)(*piVar2 + -0x38),param_3);
      return;
    }
    return;
  }
  return;
}

