// rea decompile_all
// name: FUN_00084ca4
// address: 0x84ca4
// body: available
// range: 0x84ca4-0x8500b inclusive
// range: 0x85064-0x850bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00084ca4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = param_3;
  local_1c = param_4;
  iVar1 = FUN_00157ab0(param_1 + 0x19);
  if (iVar1 == 1) {
    iVar1 = FUN_0016d7a4(0x4c,_DAT_0008500c);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      local_1c = 100;
      puVar2 = (undefined4 *)FUN_001db7c0(param_1 + 8,&local_1c);
      uVar3 = FUN_0014a610(iVar1,100,*puVar2,s___LineOut_1_8_0008500e + 2,param_1,8);
    }
    local_20 = 100;
    puVar2 = (undefined4 *)FUN_001db764(param_1 + 0x27,&local_20);
    *puVar2 = uVar3;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,uVar3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_0016d7a4(0x4c,_DAT_0008500c);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      local_1c = 0x65;
      puVar2 = (undefined4 *)FUN_001db7c0(param_1 + 8,&local_1c);
      uVar3 = FUN_0014a610(iVar1,0x65,*puVar2,s_LineOut_9_16_0008501c,param_1,8);
    }
    local_20 = 0x65;
    puVar2 = (undefined4 *)FUN_001db764(param_1 + 0x27,&local_20);
    *puVar2 = uVar3;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,uVar3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_0016d7a4(0x4c,_DAT_0008500c);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      local_1c = 0x66;
      puVar2 = (undefined4 *)FUN_001db7c0(param_1 + 8,&local_1c);
      uVar3 = FUN_0014a610(iVar1,0x66,*puVar2,s_LineOut_17_24_0008502c,param_1,8);
    }
    local_20 = 0x66;
    puVar2 = (undefined4 *)FUN_001db764(param_1 + 0x27,&local_20);
    *puVar2 = uVar3;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,uVar3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_0016d7a4(0x50,_DAT_0008500c);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      local_1c = 0x96;
      puVar2 = (undefined4 *)FUN_001db7c0(param_1 + 8,&local_1c);
      uVar3 = FUN_0014a39c(iVar1,0x96,*puVar2,s_LineIn_1_8_0008503c,param_1,8);
    }
    local_20 = 0x96;
    puVar2 = (undefined4 *)FUN_001db764(param_1 + 0x27,&local_20);
    *puVar2 = uVar3;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,uVar3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_0016d7a4(0x50,_DAT_0008500c);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      local_1c = 0x97;
      puVar2 = (undefined4 *)FUN_001db7c0(param_1 + 8,&local_1c);
      uVar3 = FUN_0014a39c(iVar1,0x97,*puVar2,s_LineIn_9_16_00085048,param_1,8);
    }
    local_20 = 0x97;
    puVar2 = (undefined4 *)FUN_001db764(param_1 + 0x27,&local_20);
    *puVar2 = uVar3;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,uVar3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_0016d7a4(0x50,_DAT_0008500c);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      local_1c = 0x98;
      puVar2 = (undefined4 *)FUN_001db7c0(param_1 + 8,&local_1c);
      uVar3 = FUN_0014a39c(iVar1,0x98,*puVar2,s_LineIn_17_24_00085054,param_1,8);
    }
    local_20 = 0x98;
    puVar2 = (undefined4 *)FUN_001db764(param_1 + 0x27,&local_20);
    *puVar2 = uVar3;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,uVar3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    FUN_000028a4(DAT_000850bc);
  }
  return 1;
}

