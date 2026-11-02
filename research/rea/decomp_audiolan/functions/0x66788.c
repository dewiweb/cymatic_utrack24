// rea decompile_all
// name: FUN_00066788
// address: 0x66788
// body: available
// range: 0x66788-0x668d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00066788(undefined4 param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 extraout_r1;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar1 = false;
  if (param_3 != 0) {
    iVar3 = FUN_00003960(*param_2,s_reset_000668d8);
    if (iVar3 != 0) {
      return 6;
    }
    bVar1 = true;
  }
  piVar2 = DAT_000668e0;
  iVar3 = *DAT_000668e0;
  if (iVar3 == 0) {
    FUN_000028a4(s_No_queue_created__0006694c);
  }
  else {
    FUN_000028a4(&DAT_0006690c,&DAT_00066908,&DAT_00066900,&DAT_000668f8);
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    iVar6 = 1;
    do {
      FUN_000038f4(&uStack_34,*(undefined4 *)(iVar3 + 4),0x18);
      FUN_000028a4(&DAT_00066924,iVar6);
      FUN_000028a4(&DAT_00066928,&uStack_34);
      FUN_000028a4(&DAT_00066930,*(undefined4 *)(iVar3 + 0x3c));
      FUN_000028a4(&DAT_00066930,*(undefined4 *)(iVar3 + 0x10));
      FUN_000028a4(&DAT_00066930,*(undefined4 *)(iVar3 + 0x14));
      if (bVar1) {
        *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar3 + 0x10);
      }
      iVar7 = *(int *)(iVar3 + 0x28);
      if (iVar7 == 0) {
        puVar5 = (undefined4 *)&DAT_00066938;
        puVar4 = &DAT_00066940;
      }
      else {
        FUN_000028a4(&DAT_0006693c,extraout_r1);
        FUN_000038f4(&uStack_34,*(undefined4 *)(iVar7 + 0x34),0x18);
        puVar5 = &uStack_34;
        puVar4 = &DAT_00066948;
      }
      FUN_000028a4(puVar4,puVar5);
      FUN_000028a4(&DAT_00066920);
      iVar3 = *(int *)(iVar3 + 0x34);
      iVar6 = iVar6 + 1;
    } while (*piVar2 != iVar3);
  }
  return 0;
}

