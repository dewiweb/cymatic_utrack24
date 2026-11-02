// rea decompile_all
// name: FUN_000d6278
// address: 0xd6278
// body: available
// range: 0xd6278-0xd6325 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_000d6278(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  int *local_1c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar4 = *(int *)(param_2 + 8);
  piVar3 = param_1 + 2;
  iVar5 = iVar4 + 1;
  FUN_001f00bc(DAT_000d6328);
  local_20 = *DAT_000d632c;
  local_1c = (int *)DAT_000d632c[1];
  if (local_1c != (int *)0x0) {
    *local_1c = *local_1c + 1;
  }
  FUN_001f06d4(DAT_000d6328);
  FUN_00201f94(param_1,&local_20);
  FUN_00201f54(&local_20);
  iVar1 = (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,piVar3,iVar5);
  if (iVar1 != 0) {
    if (*piVar3 != 0) {
      if (param_1[4] == 0) {
        iVar1 = (**(code **)(*(int *)param_1[3] + 0x1c))((int *)param_1[3],piVar3,0xffffffff);
        if (iVar1 != 0) {
          param_1[4] = param_1[4] + 1;
        }
      }
      else {
        param_1[4] = param_1[4] + 1;
      }
    }
    uVar2 = FUN_001c0864(param_2,0);
    iVar1 = param_1[2];
    FUN_000039e0(iVar1,uVar2,iVar4);
    *(undefined1 *)(iVar1 + iVar5 + -1) = 0;
    return param_1;
  }
  return param_1;
}

