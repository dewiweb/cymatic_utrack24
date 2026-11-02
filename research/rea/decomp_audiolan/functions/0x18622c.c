// rea decompile_all
// name: FUN_0018622c
// address: 0x18622c
// body: available
// range: 0x18622c-0x186389 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0018622c(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  undefined4 local_20;
  int iStack_1c;
  int *piStack_18;
  
  local_30 = 0;
  local_2c = 0;
  *param_3 = 0;
  if (param_2 < 1) {
    return -2;
  }
  local_20 = param_1;
  iStack_1c = param_2;
  piStack_18 = param_3;
  FUN_00171fdc(param_1,param_2,&local_2c,&local_30);
  iVar4 = -6;
  if ((((local_2c != 0) && (local_30 != 0)) && (*(int *)(local_30 + 4) != 0)) &&
     ((iVar1 = FUN_00174584(), iVar1 != 0 && (*(int *)(iVar1 + 0x20) != 0)))) {
    iVar4 = FUN_001a6f04(*(undefined4 *)(*(int *)(iVar1 + 0x20) + 8),s_INVITE_0018638c);
    if (iVar4 != 0) {
      return -2;
    }
    local_38 = (undefined *)FUN_0017998e(*(undefined4 *)(iVar1 + 0x20));
    if (local_38 == (undefined *)0x0) {
      local_38 = &DAT_00186394;
    }
    iVar4 = FUN_00171930(local_20,&local_34,&DAT_00186398,*(undefined4 *)(local_30 + 4));
    iVar3 = local_34;
    if (iVar4 == 0) {
      local_28[0] = 0;
      local_38 = (undefined *)0x0;
      iVar4 = FUN_001a552a(*(undefined4 *)(iVar1 + 0x20),0,local_28);
      if (((-1 < iVar4) && (local_28[0] != 0)) && (*(int *)(local_28[0] + 4) != 0)) {
        iVar4 = FUN_001a552a(iVar3,0,&local_38);
        if ((-1 < iVar4) && (local_38 != (undefined *)0x0)) {
          FUN_001a4cbc(iVar3 + 0x58,0);
          FUN_001a3214(local_38);
        }
        local_38 = (undefined *)0x0;
        iVar4 = FUN_001a320c(local_28[0],&local_38);
        if ((-1 < iVar4) && (local_38 != (undefined *)0x0)) {
          FUN_001a4a80(iVar3 + 0x58,local_38,0);
        }
      }
      iVar4 = *(int *)(*(int *)(iVar1 + 0x20) + 0x70);
      if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) && (local_34 != 0)) &&
         ((*(int *)(local_34 + 0x70) != 0 && (*(int *)(*(int *)(local_34 + 0x70) + 4) != 0)))) {
        if ((code *)*DAT_0018639c == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_0018639c)();
        }
        uVar2 = FUN_001a6f50(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x20) + 0x70) + 4));
        *(undefined4 *)(*(int *)(local_34 + 0x70) + 4) = uVar2;
      }
      iVar4 = 0;
      uVar2 = *(undefined4 *)(iVar1 + 0x20);
      while( true ) {
        local_28[0] = 0;
        iVar3 = FUN_001a5590(uVar2,iVar4,local_28);
        if (((iVar3 < 0) || (local_28[0] == 0)) ||
           (iVar3 = FUN_001a1e84(local_28[0],&local_38), iVar3 != 0)) break;
        FUN_001a4a80(local_34 + 0x94,local_38,0xffffffff);
        iVar4 = iVar4 + 1;
        uVar2 = *(undefined4 *)(iVar1 + 0x20);
      }
      *param_3 = local_34;
      return 0;
    }
  }
  return iVar4;
}

