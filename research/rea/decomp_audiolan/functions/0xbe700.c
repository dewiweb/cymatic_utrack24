// rea decompile_all
// name: FUN_000be700
// address: 0xbe700
// body: available
// range: 0xbe700-0xbe827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000be700(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_r2;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  
  uVar1 = DAT_000be828;
  iVar10 = param_1;
  uVar13 = param_3;
  FUN_001a0700();
  uVar5 = *(uint *)(param_1 + 0x1ec);
  uVar7 = uVar5;
  uVar3 = *(uint *)(uVar5 + 4);
  uVar6 = extraout_r2;
  while (uVar3 != 0) {
    uVar6 = param_2;
    if (*(uint *)(uVar3 + 0x10) < param_2) {
      uVar3 = *(uint *)(uVar3 + 0xc);
    }
    else {
      uVar7 = uVar3;
      uVar3 = *(uint *)(uVar3 + 8);
    }
  }
  if ((uVar7 == uVar5) ||
     (uVar6 = *(uint *)(uVar7 + 0x10), uVar3 = uVar7, uVar7 = param_2, param_2 < uVar6)) {
    uVar3 = uVar5;
  }
  if (uVar3 == uVar5) {
    FUN_000028a4(DAT_000be834,param_2,uVar6,uVar7,iVar10,param_2,uVar13);
    FUN_001a0d18(uVar1);
    return 0;
  }
  piVar8 = *(int **)(uVar3 + 0x14);
  if (*(byte *)(piVar8 + 4) != param_3) {
    *(char *)(piVar8 + 4) = (char)param_3;
    iVar10 = *piVar8;
    uVar11 = *DAT_000be82c;
    uVar12 = DAT_000be82c[1];
    piVar9 = *(int **)(iVar10 + 0x24);
    puVar4 = (undefined4 *)FUN_001a0808(0x18,1);
    uVar2 = DAT_000be830;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[5] = piVar8;
      puVar4[4] = iVar10;
      *puVar4 = uVar2;
      puVar4[1] = piVar9;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
    }
    (**(code **)(*piVar9 + 0x2c))(piVar9,puVar4,0xffffffff);
  }
  FUN_001a0d18(uVar1);
  return 1;
}

