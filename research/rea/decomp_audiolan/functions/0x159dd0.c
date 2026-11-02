// rea decompile_all
// name: FUN_00159dd0
// address: 0x159dd0
// body: available
// range: 0x159dd0-0x159eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x159eac to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00159ea0) */

void FUN_00159dd0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_00159eb0;
  FUN_001a0700();
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x1f5);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  puVar2 = (undefined1 *)FUN_001ce910(param_1);
  param_1[4] = puVar2;
  *puVar2 = 0;
  iVar3 = FUN_001cf238(param_1,*(undefined4 *)(*(int *)(param_2 + 0x1ec) + 4),param_1[4]);
  *(int *)(param_1[4] + 4) = iVar3;
  iVar5 = param_1[4];
  if (iVar3 == 0) {
    *(int *)(iVar5 + 8) = iVar5;
    *(undefined4 *)(param_1[4] + 0xc) = param_1[4];
  }
  else {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar4 + 8);
    } while (iVar3 != 0);
    *(int *)(iVar5 + 8) = iVar4;
    iVar3 = *(int *)(param_1[4] + 4);
    do {
      iVar5 = iVar3;
      iVar3 = *(int *)(iVar5 + 0xc);
    } while (iVar3 != 0);
    *(int *)(param_1[4] + 0xc) = iVar5;
  }
  FUN_001a0d18(uVar1);
  return;
}

