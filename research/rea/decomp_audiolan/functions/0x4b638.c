// rea decompile_all
// name: FUN_0004b638
// address: 0x4b638
// body: available
// range: 0x4b638-0x4b7f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4b694 to 0x4b838 FUN_0004b838 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004b638(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_28;
  int *piStack_24;
  undefined4 auStack_20 [2];
  
  pcVar2 = (char *)FUN_001524c0();
  if (pcVar2 == (char *)0x0) {
    FUN_000028a4(s_ERROR__ConfigNode__getSibling__I_0004b7f4,param_2);
    return 0;
  }
  cVar1 = *pcVar2;
  if (cVar1 == '\0') {
    return param_1;
  }
  uVar8 = 0;
  while (uVar9 = uVar8 + 1, cVar1 != '/') {
    cVar1 = pcVar2[uVar9];
    uVar8 = uVar9;
    if (cVar1 == '\0') {
      uVar3 = FUN_0004b838(param_1,pcVar2);
      return uVar3;
    }
  }
  if (0xfffffff1 < uVar8) {
    uStack_28 = 0xfffffff1;
    FUN_0010f7cc(8,DAT_0004b830,DAT_0004b830,uVar8);
  }
  piStack_24 = DAT_0004b834;
  if (uVar8 != 0) {
    puVar4 = auStack_20;
    if (0x80 < uVar8) {
      puVar4 = &uStack_28;
    }
    uStack_28 = uVar8;
    auStack_20[0] = 0x80;
    piStack_24 = (int *)FUN_001da28c(&piStack_24,*puVar4,uVar8);
  }
  piStack_24 = piStack_24 + 3;
  if (pcVar2 != (char *)0x0) {
    FUN_00003628();
  }
  iVar5 = FUN_0004b838(param_1,piStack_24);
  piVar7 = DAT_0004b834;
  if (iVar5 != 0) {
    uVar3 = FUN_0004b638(iVar5,pcVar2 + uVar9);
    if (piStack_24 != piVar7 + 3) {
      piVar6 = piStack_24 + -3;
      iVar5 = *piVar6;
      if ((iVar5 == -1) || ((piVar6 != piVar7 && (*piVar6 = iVar5 + -1, iVar5 == 0)))) {
        FUN_0010fa20(piStack_24 + -3,piStack_24[-2] + 0xe,0);
      }
    }
    return uVar3;
  }
  if (piStack_24 != DAT_0004b834 + 3) {
    piVar7 = piStack_24 + -3;
    iVar5 = *piVar7;
    if ((iVar5 == -1) || ((piVar7 != DAT_0004b834 && (*piVar7 = iVar5 + -1, iVar5 == 0)))) {
      FUN_0010fa20(piStack_24 + -3,piStack_24[-2] + 0xe,0);
    }
  }
  return 0;
}

