// rea decompile_all
// name: FUN_0016ac38
// address: 0x16ac38
// body: available
// range: 0x16ac38-0x16ad0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016ac38(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int aiStack_28 [3];
  
  param_1 = (int *)(*(int *)(*param_1 + -0xa4) + (int)param_1);
  iVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_4 != 0 && param_2 != 3) && param_2 != 4) {
    FUN_001179e0(param_1);
    iVar1 = param_1[9];
    FUN_00116ec0(&iStack_38 + 4,iVar1 + 0x1e0);
    iStack_38 = param_4;
    (&iStack_38)[1] = (int)param_1;
    (&iStack_38)[2] = iVar1 + 0x484;
    (&iStack_38)[3] = param_5;
    piVar2 = (int *)FUN_0013bed4(param_1 + 0x19,&iStack_38 + 4,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      FUN_000fb87c();
      FUN_001179d0(param_1);
      return *(int *)(*piVar2 + -0xc) + (int)piVar2;
    }
    FUN_001179d0(param_1);
    return 0;
  }
  return 0;
}

