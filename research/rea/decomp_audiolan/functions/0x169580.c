// rea decompile_all
// name: FUN_00169580
// address: 0x169580
// body: available
// range: 0x169580-0x169727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x169724 to 0x16d758 FUN_0016d758 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00169580(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_20 [8];
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    return;
  }
  puVar1 = (ushort *)FUN_001463c8(param_4,param_5);
  if (puVar1 == (ushort *)0x0) {
    return;
  }
  if (*puVar1 < 2) goto LAB_00169714;
  FUN_00146600(puVar1);
  if (param_3 != 0x2300) {
    if (param_3 == 0x2301) {
      FUN_001203a8(param_1 + -4,0);
      goto LAB_00169714;
    }
    if (param_3 != 0x2302) goto LAB_00169714;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') goto LAB_00169714;
  if (*(char *)(param_1 + 0xc) != '\x02') {
    *(undefined1 *)(param_1 + 0xc) = 2;
    iVar2 = *(int *)(param_1 + 4);
    iVar8 = iVar2;
    if (iVar2 != 0) {
      iVar8 = iVar2 + 0x40;
    }
    FUN_0013c8c8(iVar2 + 0x10c,1,iVar8);
    (**(code **)(**(int **)(param_1 + 8) + 0x30))(*(int **)(param_1 + 8),700,0);
  }
  *(undefined2 *)(param_1 + 0xe) = 0xe;
  if (*puVar1 < 10) goto LAB_00169714;
  uVar3 = FUN_00146600(puVar1);
  uVar4 = FUN_00146600(puVar1);
  uVar5 = FUN_00146600(puVar1);
  FUN_0010e7e0(auStack_20);
  FUN_001465b8(puVar1,auStack_20);
  uVar6 = FUN_0015e7f0(param_1 + 0x14,auStack_20);
  bVar9 = uVar6 != 0;
  if (!bVar9) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x1c);
  }
  if (bVar9 || uVar6 != uVar3) {
LAB_001696b0:
    FUN_0010e498(param_1 + 0x14,auStack_20);
    *(short *)(param_1 + 0x1c) = (short)uVar3;
    *(short *)(param_1 + 0x1e) = (short)uVar4;
    *(short *)(param_1 + 0x20) = (short)uVar5;
    uVar7 = FUN_0015e89c(auStack_20);
    iVar8 = *(int *)(param_1 + 4);
    if (iVar8 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar8 + 0x40;
    }
    FUN_0013c810(iVar8 + 0x10c,1,iVar2,uVar7);
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x1e);
    bVar9 = uVar6 == uVar4;
    if (bVar9) {
      uVar6 = (uint)*(ushort *)(param_1 + 0x20);
    }
    if (!bVar9 || uVar6 != uVar5) goto LAB_001696b0;
  }
  FUN_0010e7f4(auStack_20);
LAB_00169714:
  FUN_001466c0(puVar1);
  FUN_0016d758();
  return;
}

