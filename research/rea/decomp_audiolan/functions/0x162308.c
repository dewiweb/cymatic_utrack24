// rea decompile_all
// name: FUN_00162308
// address: 0x162308
// body: available
// range: 0x162308-0x162483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x162368 to 0xe5b54 FUN_000e5b54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1623a0 to 0xe5b54 FUN_000e5b54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1623f8 to 0xe5b54 FUN_000e5b54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x162410 to 0xe5b54 FUN_000e5b54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x162480 to 0xe5b54 FUN_000e5b54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00162308(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1 + -0xc;
  iVar2 = FUN_000b9aac();
  uVar1 = (undefined2)param_5;
  if (param_4 == DAT_00162484) {
    *(undefined2 *)(param_1 + 0x30) = uVar1;
    FUN_000e5b54(iVar5,2,0);
    return;
  }
  if (DAT_00162484 <= param_4) {
    if (param_4 - DAT_00162484 == 1) {
      *(ushort *)(param_1 + 0x3c) = (ushort)(param_5 != 0);
      FUN_000e5b54(iVar5,2,0,DAT_0016249c);
      return;
    }
    if (param_4 - DAT_00162484 == 0x2f) {
      *(ushort *)(param_1 + 0x40) = (ushort)(param_5 != 0);
      FUN_000e5b54(iVar5,2,0,DAT_0016248c);
      return;
    }
    return;
  }
  if (param_4 == 0x500) {
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    FUN_000e5b54(iVar5,2,0,0x500);
    FUN_000e5b54(iVar5,4,0,0x500);
    FUN_000e5b54(iVar5,4,0,DAT_00162490);
    FUN_000e5b54(iVar5,4,0,DAT_00162494);
    return;
  }
  if (param_4 == 0x1000) {
    *(undefined2 *)(param_1 + 0x32) = uVar1;
    FUN_000e5b54(iVar5,2,0,0x1000);
    uVar3 = (uint)*(byte *)(iVar2 + 0x251);
    uVar4 = extraout_r1;
    if (uVar3 < 8) {
      uVar4 = (uint)*(ushort *)(DAT_00162498 + uVar3 * 2);
    }
    if (7 < uVar3) {
      uVar4 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00162458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x88) + 0x30))(*(int **)(param_1 + 0x88),uVar4);
    return;
  }
  if (param_4 == 0x1001) {
    *(undefined2 *)(param_1 + 0x34) = uVar1;
    FUN_000e5b54(iVar5,2,0,DAT_00162488);
    return;
  }
  return;
}

