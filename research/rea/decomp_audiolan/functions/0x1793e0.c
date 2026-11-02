// rea decompile_all
// name: FUN_001793e0
// address: 0x1793e0
// body: available
// range: 0x1793e0-0x1794bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001793e0(undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c [2];
  undefined4 local_24;
  int iStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  
  local_38 = 0;
  if ((((param_2 == 0) || (param_3 == (undefined4 *)0x0)) || (param_4 == 0)) ||
     (*(int *)(param_4 + 0x20) == 0)) {
    iVar1 = -2;
  }
  else {
    local_24 = param_1;
    iStack_20 = param_2;
    puStack_1c = param_3;
    iStack_18 = param_4;
    iVar1 = FUN_00187d6c(param_1,*param_3,&local_38);
    if (iVar1 == 0) {
      FUN_001a56f2(*(undefined4 *)(param_4 + 0x20),s_expires_001794c0,0,&local_30);
      if ((local_30 != 0) && (*(int *)(local_30 + 4) != 0)) {
        FUN_001a6054(local_38,s_Expires_001794c8);
      }
      iVar1 = 0;
      uVar2 = *(undefined4 *)(param_4 + 0x20);
      while (((local_2c[0] = 0, iVar3 = FUN_001a54ac(uVar2,iVar1,local_2c), -1 < iVar3 &&
              (local_2c[0] != 0)) && (iVar3 = FUN_001a3418(local_2c[0],&local_34), iVar3 == 0))) {
        FUN_001a4a80(local_38 + 0x14,local_34,0xffffffff);
        iVar1 = iVar1 + 1;
        uVar2 = *(undefined4 *)(param_4 + 0x20);
      }
      local_2c[0] = 0;
      iVar1 = FUN_001a56f2(*(undefined4 *)(param_4 + 0x20),s_Event_001794d0,0,local_2c);
      while (((-1 < iVar1 && (local_2c[0] != 0)) &&
             (iVar3 = FUN_001a4528(local_2c[0],&local_34), iVar3 == 0))) {
        FUN_001a4a80(local_38 + 0xc0,local_34,0xffffffff);
        local_2c[0] = 0;
        iVar1 = FUN_001a56f2(*(undefined4 *)(param_4 + 0x20),s_Event_001794d0,iVar1 + 1,local_2c);
      }
      iVar1 = FUN_00187ea0(local_24,*param_3,local_38);
      return iVar1;
    }
  }
  return iVar1;
}

