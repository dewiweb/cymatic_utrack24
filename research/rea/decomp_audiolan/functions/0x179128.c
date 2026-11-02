// rea decompile_all
// name: FUN_00179128
// address: 0x179128
// body: available
// range: 0x179128-0x179257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00179128(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_38;
  int local_34 [2];
  int local_2c;
  int local_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *local_18;
  
  bVar3 = true;
  uStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  iVar1 = FUN_001a4bdc(param_2 + 0xb0,0);
  if (iVar1 == 0) {
    return DAT_00179258;
  }
  if (*(int *)(iVar1 + 4) == 0) {
    return DAT_00179258;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    if (*(int *)(param_2 + 8) == 0) {
      return DAT_00179258;
    }
    FUN_001a5664(param_2,0,local_34);
    if (local_34[0] == 0) {
LAB_001791b8:
      local_2c = 0;
      FUN_001a7c44(*(int *)(param_2 + 4) + 0x14,s_maddr_0017925c,&local_2c);
      iVar2 = 0;
      if ((local_2c != 0) && (*(int *)(local_2c + 4) != 0)) {
        iVar2 = *(int *)(local_2c + 4);
      }
      iVar1 = *(int *)(param_2 + 4);
      bVar3 = *(int *)(iVar1 + 0x10) == 0;
      if (iVar2 != 0) goto LAB_00179200;
    }
    else {
      local_38 = 0;
      FUN_001a7c44(*(int *)(local_34[0] + 4) + 0x14,&DAT_00179278,&local_38);
      if (local_38 == 0) {
        local_34[0] = 0;
        goto LAB_001791b8;
      }
      if (local_34[0] == 0) goto LAB_001791b8;
      iVar1 = *(int *)(local_34[0] + 4);
      if (*(int *)(iVar1 + 0x10) != 0) {
        bVar3 = false;
      }
    }
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  else {
    iVar2 = iVar1 + 0x14;
    FUN_001a7c44(iVar2,s_maddr_0017925c,&local_2c);
    FUN_001a7c44(iVar2,s_received_00179264,&local_28);
    FUN_001a7c44(iVar2,s_rport_00179270,auStack_24);
    iVar2 = local_2c;
    if ((local_2c == 0) && (iVar2 = local_28, local_28 == 0)) {
      iVar2 = *(int *)(iVar1 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      bVar3 = false;
    }
  }
  if (iVar2 == 0) {
    return 0xfffffff4;
  }
LAB_00179200:
  iVar1 = FUN_00003318(iVar2,0x3a);
  if (((iVar1 == 0) && (iVar1 = FUN_0018e274(iVar2), iVar1 == -1)) && (bVar3)) {
    if (*(int *)(param_2 + 0xc) == 0) {
      FUN_00003960(*(undefined4 *)(param_2 + 8),s_REGISTER_0017927c);
    }
    local_38 = 0;
    FUN_001a7c44(*(int *)(param_2 + 0xac) + 8,&DAT_00179288,&local_38);
    *local_18 = 0;
    return 0;
  }
  return 0xffffffff;
}

