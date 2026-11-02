// rea decompile_all
// name: FUN_000d34d0
// address: 0xd34d0
// body: available
// range: 0xd34d0-0xd3603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000d34d0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_34 [8];
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  uVar1 = FUN_0022dff0(param_1 + 0xbc);
  if (uVar1 < 99) {
    local_28 = *(undefined4 *)(param_1 + 0xb4);
    local_2c = param_2;
    if (param_2 == 0) {
      local_2c = FUN_000bdc24(param_1 + 0x14);
      local_2c = *(int *)(param_1 + 0xa4) * local_2c;
    }
    local_24 = local_2c - *(int *)(param_1 + 0xa8);
    FUN_00239ac8(param_1 + 0xbc,&local_2c);
    uVar2 = FUN_0022dff0(param_1 + 0xbc);
    uVar3 = FUN_0011eda0();
    FUN_001202a0(uVar3,uVar2);
    FUN_000f4e84();
    uVar2 = FUN_000f4fc0();
    uVar3 = FUN_0022dff0(param_1 + 0xbc);
    FUN_000952d8(uVar2,uVar3);
    FUN_000f4e84();
    uVar2 = FUN_000f4fb4();
    iVar4 = FUN_0006d818(uVar2);
    if (iVar4 == 1) {
      FUN_000aa570();
      uVar2 = FUN_000aa88c();
      FUN_000908fc(uVar2,local_2c);
    }
    FUN_001462a8(auStack_34);
    piVar5 = (int *)FUN_000f8ee0();
    iVar4 = (**(code **)(*piVar5 + 0x80))(piVar5,auStack_34);
    if (iVar4 == 0) {
      FUN_00002898(s_ERROR__Save_cue_failed_000d3604);
    }
    uVar1 = FUN_001462dc(auStack_34);
  }
  return uVar1;
}

