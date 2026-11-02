// rea decompile_all
// name: FUN_000bcee4
// address: 0xbcee4
// body: available
// range: 0xbcee4-0xbd17b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000bcee4(int *param_1,undefined1 param_2,undefined *param_3,undefined *param_4,
                 undefined *param_5,undefined *param_6,undefined *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  undefined4 local_2c;
  
  uVar1 = *(undefined4 *)(DAT_000bd17c + 0xb8);
  uVar2 = *(undefined4 *)(DAT_000bd17c + 0xbc);
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_000bd180;
  }
  uVar3 = FUN_001da358(auStack_7c,param_3,auStack_68);
  if (param_4 == (undefined *)0x0) {
    param_4 = &DAT_000bd180;
  }
  uVar4 = FUN_001da358(auStack_78,param_4,auStack_64);
  if (param_5 == (undefined *)0x0) {
    param_5 = &DAT_000bd180;
  }
  uVar5 = FUN_001da358(auStack_74,param_5,auStack_60);
  bVar9 = param_6 != (undefined *)0x0;
  if (!bVar9) {
    param_6 = &DAT_000bd180;
  }
  uVar6 = FUN_001da358(auStack_70,param_6,auStack_5c);
  bVar10 = param_7 == (undefined *)0x0;
  if (bVar10) {
    param_7 = &DAT_000bd180;
  }
  local_2c = FUN_001da358(auStack_6c,param_7,auStack_58);
  puVar7 = (undefined4 *)FUN_001a0808(0x30,1);
  if (puVar7 == (undefined4 *)0x0) {
    iVar8 = 0;
  }
  else {
    FUN_001da408(auStack_44,uVar3);
    FUN_001da408(auStack_40,uVar4);
    FUN_001da408(auStack_3c,uVar5);
    FUN_001da408(auStack_38,uVar6);
    FUN_001da408(auStack_34,local_2c);
    *puVar7 = DAT_000bd184;
    puVar7[1] = param_1;
    puVar7[2] = uVar1;
    puVar7[3] = uVar2;
    *(undefined1 *)(puVar7 + 4) = param_2;
    iVar8 = FUN_001da408(puVar7 + 5,auStack_44);
    iVar8 = FUN_001da408(iVar8 + 4,auStack_40);
    iVar8 = FUN_001da408(iVar8 + 4,auStack_3c);
    *(bool *)(iVar8 + 4) = bVar9;
    iVar8 = FUN_001da408(iVar8 + 8,auStack_38);
    *(bool *)(iVar8 + 4) = !bVar10;
    iVar8 = FUN_001da408(iVar8 + 8,auStack_34);
    iVar8 = iVar8 + -0x2c;
  }
  (**(code **)(*param_1 + 0x2c))(param_1,iVar8,0xffffffff);
  if (puVar7 != (undefined4 *)0x0) {
    thunk_FUN_001da314(auStack_34);
    thunk_FUN_001da314(auStack_38);
    thunk_FUN_001da314(auStack_3c);
    thunk_FUN_001da314(auStack_40);
    thunk_FUN_001da314(auStack_44);
  }
  FUN_001da314(auStack_6c);
  FUN_001da314(auStack_70);
  FUN_001da314(auStack_74);
  FUN_001da314(auStack_78);
  FUN_001da314(auStack_7c);
  return;
}

