// rea decompile_all
// name: FUN_00069d0c
// address: 0x69d0c
// body: available
// range: 0x69d0c-0x69e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00069d0c(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar1 = (undefined4 *)FUN_0023d888(param_1 + 0xc0,param_2);
  local_2c = *puVar1;
  local_28 = puVar1[1];
  FUN_001a2920(auStack_34,param_1 + 0x144);
  uVar2 = FUN_0022e594(param_1 + 0xc0);
  if ((uVar2 != *(byte *)(param_1 + 0x118)) && (*(byte *)(param_1 + 0x118) != param_2)) {
    FUN_00243d78(&local_3c,param_1 + 0xd8,param_2);
    local_24 = local_3c;
    local_20 = local_38;
    local_1c = local_3c;
    local_18 = local_38;
    iVar3 = FUN_0022ee86(&local_1c);
    if (iVar3 == 0) {
      local_28._0_2_ = CONCAT11(1,(undefined1)local_28);
    }
  }
  FUN_0023713c(auStack_40,param_1 + 300);
  while( true ) {
    FUN_0023711c(&local_38,param_1 + 300);
    iVar3 = FUN_0022d940(auStack_40,&local_38);
    if (iVar3 == 0) break;
    puVar1 = (undefined4 *)FUN_0022d90c(auStack_40);
    puVar1 = (undefined4 *)*puVar1;
    FUN_00243d78(&local_58,param_1 + 0xec,param_2);
    local_50 = local_58;
    uStack_4c = uStack_54;
    local_48 = local_58;
    uStack_44 = uStack_54;
    iVar3 = FUN_0022ee86(&local_48);
    if (iVar3 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x114);
    }
    else {
      uVar4 = 0;
    }
    (**(code **)*puVar1)(puVar1,param_2,&local_2c,uVar4);
    FUN_00232c6c(&local_3c,auStack_40,0);
  }
  FUN_001a2938(auStack_34);
  return;
}

