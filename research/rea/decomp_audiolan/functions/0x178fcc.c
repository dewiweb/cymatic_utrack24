// rea decompile_all
// name: FUN_00178fcc
// address: 0x178fcc
// body: available
// range: 0x178fcc-0x1790fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00178fcc(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int iStack_1c;
  int iStack_18;
  
  if (*(int *)(param_3 + 0xc) == 0x65) {
    return 0;
  }
  local_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  iVar1 = FUN_001a4bdc(param_3 + 0xb0,0);
  iVar3 = DAT_00179100;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
    return 0xffffffff;
  }
  if (param_4 != 0) goto LAB_001790d6;
  if (*(int *)(param_3 + 0xc) != 0) {
    iVar2 = iVar1 + 0x14;
    FUN_001a7c44(iVar2,s_maddr_00179104);
    FUN_001a7c44(iVar2,s_received_0017910c,&local_2c);
    FUN_001a7c44(iVar2,s_rport_00179118,&local_28);
    if (((local_30 == 0) || (param_4 = *(int *)(local_30 + 4), param_4 == 0)) &&
       ((local_2c == 0 || (param_4 = *(int *)(local_2c + 4), param_4 == 0)))) {
      param_4 = *(int *)(iVar1 + 8);
    }
    if (((local_28 != 0) && (*(int *)(local_28 + 4) != 0)) ||
       (param_5 = iVar3, *(int *)(iVar1 + 0xc) != 0)) {
      param_5 = FUN_001a1aa8();
    }
    goto LAB_001790d6;
  }
  FUN_001a5664(param_3,0,&local_30);
  if (local_30 == 0) {
LAB_0017907c:
    local_2c = 0;
    FUN_001a7c44(*(int *)(param_3 + 4) + 0x14,s_maddr_00179104,&local_2c);
    if ((local_2c != 0) && (*(int *)(local_2c + 4) != 0)) {
      param_4 = *(int *)(local_2c + 4);
    }
    if (*(int *)(*(int *)(param_3 + 4) + 0x10) != 0) {
      iVar3 = FUN_001a1aa8();
    }
    param_5 = iVar3;
    if (param_4 != 0) goto LAB_001790d6;
    iVar1 = *(int *)(param_3 + 4);
  }
  else {
    local_2c = 0;
    FUN_001a7c44(*(int *)(local_30 + 4) + 0x14,&DAT_00179120,&local_2c);
    if (local_2c == 0) {
      local_30 = 0;
      goto LAB_0017907c;
    }
    if (local_30 == 0) goto LAB_0017907c;
    if (*(int *)(*(int *)(local_30 + 4) + 0x10) != 0) {
      iVar3 = FUN_001a1aa8();
    }
    iVar1 = *(int *)(local_30 + 4);
  }
  param_4 = *(int *)(iVar1 + 0xc);
  param_5 = iVar3;
LAB_001790d6:
  pcVar5 = *(code **)(local_24 + DAT_00179124 + 0x2c);
  if (pcVar5 != entry) {
    (*pcVar5)(param_3,0);
  }
  local_2c = param_6;
  local_30 = param_5;
  uVar4 = (**(code **)(local_24 + 0x4c))(local_24,local_20,param_3,param_4);
  return uVar4;
}

