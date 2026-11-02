// rea decompile_all
// name: FUN_00057758
// address: 0x57758
// body: available
// range: 0x57758-0x57897 inclusive
// range: 0x72d5c-0x72e8b inclusive
// range: 0xd67bc-0xd67fb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00057758(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *unaff_r4;
  uint uVar5;
  undefined1 auStack_18 [8];
  
  *param_1 = DAT_00057898;
  if ((int *)param_1[0x3b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3b] + 4))();
    param_1[0x3b] = 0;
  }
  if ((param_1[0x37] != 0) && (uVar5 = 0, (int)(param_1[0x35] - param_1[0x34]) >> 2 != 0)) {
    do {
      if (*(int *)(*(int *)(param_1[0x37] + 4) + uVar5 * 4) == 0) break;
      (**(code **)(**(int **)(param_1[0x34] + uVar5 * 4) + 0x6c))();
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((int)(param_1[0x35] - param_1[0x34]) >> 2));
  }
  iVar4 = param_1[0x35];
  if (param_1[0x34] != iVar4) {
    param_1[0x35] = iVar4 - (iVar4 - param_1[0x34] & 0xfffffffcU);
  }
  if (param_1[0x37] != 0) {
    if (((int *)param_1[0x32] == (int *)0x0) ||
       ((**(code **)(*(int *)param_1[0x32] + 0x184))(), param_1[0x37] != 0)) {
      FUN_0000e800(param_1[0x37]);
      FUN_001eecc8();
    }
    param_1[0x37] = 0;
  }
  if (param_1[0x3a] != 0) {
    FUN_001dae58();
    param_1[0x3a] = 0;
  }
  FUN_00173a54(param_1[0x34],(int)(param_1[0x36] - param_1[0x34]) >> 2,0);
  iVar4 = FUN_00203c10(param_1 + 0x31);
  iVar4 = FUN_00203b04(iVar4 + -8);
  *(undefined4 *)(iVar4 + -0xbc) = DAT_000d67fc;
  iVar4 = FUN_000b1228(iVar4 + -0x20);
  iVar4 = FUN_000b1228(iVar4 + -0xc);
  iVar4 = FUN_000b1228(iVar4 + -0xc);
  iVar3 = FUN_000b1228(iVar4 + -0xc);
  FUN_001f01ac(iVar3 + -0x24);
  *(undefined4 *)(iVar3 + -0x78) = DAT_00072e8c;
  uVar1 = FUN_000b4964();
  FUN_000b48f4(uVar1,(undefined4 *)(iVar3 + -0x78));
  puVar2 = (undefined4 *)FUN_000b1210(auStack_18);
  *puVar2 = DAT_00072e90;
  uVar1 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar1,DAT_00072e94,auStack_18);
  if (iVar4 != 0) {
    (**(code **)(*unaff_r4 + 0x2c))(unaff_r4,*(undefined4 *)(iVar3 + -100));
  }
  iVar4 = FUN_001b6c4c(auStack_18);
  if (iVar4 != 0) {
    (**(code **)(*unaff_r4 + 0x34))(unaff_r4,*(undefined4 *)(iVar3 + -0x74));
    (**(code **)(*unaff_r4 + 0x34))(unaff_r4,*(undefined4 *)(iVar3 + -0x70));
  }
  if (*(int **)(iVar3 + -0x74) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + -0x74) + 4))();
  }
  *(undefined4 *)(iVar3 + -0x74) = 0;
  if (*(int **)(iVar3 + -0x70) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + -0x70) + 4))();
  }
  *(undefined4 *)(iVar3 + -0x70) = 0;
  FUN_000b1228(auStack_18);
  FUN_00173a54(*(int *)(iVar3 + -0x30),*(int *)(iVar3 + -0x28) - *(int *)(iVar3 + -0x30) >> 2,0);
  FUN_00173a54(*(int *)(iVar3 + -0x3c),*(int *)(iVar3 + -0x34) - *(int *)(iVar3 + -0x3c) >> 2,0);
  FUN_001f01ac(iVar3 + -0x60);
  *(undefined4 *)(iVar3 + -0x6c) = DAT_00072e98;
  FUN_001eecc8(*(undefined4 *)(iVar3 + -0x68));
  return iVar3 + -0x78;
}

