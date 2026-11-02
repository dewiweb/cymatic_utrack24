// rea decompile_all
// name: FUN_00116d0c
// address: 0x116d0c
// body: available
// range: 0x116d0c-0x116dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00116d0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_1a4 [172];
  undefined1 auStack_f8 [176];
  undefined4 local_48;
  int *local_44;
  
  *(undefined1 *)(param_1 + 0x45) = 2;
  *(undefined1 *)((int)param_1 + 0x915) = 0;
  uVar3 = *DAT_00116dfc;
  uVar4 = DAT_00116dfc[1];
  FUN_00003b88(auStack_f8,param_4,0xac);
  local_48 = 0xffffffff;
  puVar1 = (undefined4 *)FUN_001f01c4(0xcc,1);
  if (puVar1 != (undefined4 *)0x0) {
    local_44 = param_1;
    FUN_00003b88(auStack_1a4,auStack_f8,0xac);
    *puVar1 = DAT_00116e00;
    puVar1[1] = local_44;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    puVar1[4] = param_2;
    puVar1[5] = param_3;
    FUN_00003b88(puVar1 + 6,auStack_1a4,0xac);
    puVar1[0x31] = param_5;
    puVar1[0x32] = param_6;
  }
  iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,puVar1,local_48);
  if (iVar2 == 0) {
    FUN_00002898(DAT_00116e04);
    *(undefined1 *)(param_1 + 0x45) = 3;
    return 0;
  }
  return 1;
}

