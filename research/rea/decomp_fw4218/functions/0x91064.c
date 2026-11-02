// rea decompile_all
// name: FUN_00091064
// address: 0x91064
// body: available
// range: 0x91064-0x91157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00091064(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = *param_2;
    if (*(int *)(iVar2 + -0xc) == -1) {
      FUN_00232724(param_1,0,*(undefined4 *)(*param_1 + -4),iVar2,*(undefined4 *)(iVar2 + -4),0,
                   *(undefined4 *)(iVar2 + -4));
    }
    else {
      if ((int *)(iVar2 + -0xc) != DAT_00091158) {
        *(int *)(iVar2 + -0xc) = *(int *)(iVar2 + -0xc) + 1;
      }
      FUN_00232920(param_1);
      *param_1 = *param_2;
    }
    param_1[1] = param_2[1];
    *(char *)(param_1 + 2) = (char)param_2[2];
    *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    FUN_0023a1b4(param_1 + 5,param_2 + 5);
    if (param_1[8] != 0) {
      FUN_001118c8();
      FUN_001eecc8();
      param_1[8] = 0;
    }
    if (param_2[8] != 0) {
      iVar1 = FUN_001f01c4(0x40,1);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = FUN_00111640(iVar1,param_2[8]);
      }
      param_1[8] = iVar2;
    }
  }
  return param_1;
}

