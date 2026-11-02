// rea decompile_all
// name: FUN_00186c84
// address: 0x186c84
// body: available
// range: 0x186c84-0x186e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00186c84(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_24 [4];
  
  local_24[0] = 0;
  local_34 = 0;
  local_38 = 0;
  if (param_3 < 1) {
    if (param_2 < 1) {
      return -2;
    }
    FUN_00172024(param_1,param_2,&local_38);
  }
  else {
    FUN_00171fdc(param_1,param_3,&local_38,&local_34);
    if (local_34 == 0) {
      return -6;
    }
  }
  if (local_38 == 0) {
    return -6;
  }
  iVar3 = FUN_00174630(local_38,local_34);
  if (((local_34 == 0) || (*(int *)(local_34 + 4) == 0)) ||
     (*(char *)(*(int *)(local_34 + 4) + 0x31) != '\x15')) {
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) &&
       (*(int *)(*(int *)(iVar3 + 0x24) + 0xc) - 100U < 100)) {
      iVar3 = FUN_00174870(param_1,local_24,*(undefined4 *)(iVar3 + 0x20));
      uVar2 = local_24[0];
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_0017994c(param_1,&local_30,2,*(undefined4 *)(param_1 + 0xa4),local_24[0]);
      if (iVar3 == 0) {
        FUN_001a4a80(param_1 + 0x9c,local_30,0);
        iVar3 = FUN_001a688c(uVar2);
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(local_30 + 4);
        FUN_001a7216(local_30,iVar3);
        FUN_00179b24(param_1);
        return 1;
      }
      FUN_001a52e0(uVar2);
      return iVar3;
    }
    if ((local_34 != 0) && (*(int *)(local_34 + 4) != 0)) goto LAB_00186d68;
LAB_00186dee:
    iVar3 = -3;
  }
  else {
LAB_00186d68:
    if (iVar3 == 0) {
      iVar3 = FUN_00174440(local_38);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) &&
         (*(int *)(*(int *)(iVar3 + 0x24) + 0xc) - 100U < 100)) {
        FUN_001a7c44(*(int *)(*(int *)(iVar3 + 0x20) + 0xac) + 8,&DAT_00186e4c,&local_3c);
        iVar3 = FUN_00186744(param_1,*(undefined4 *)(iVar3 + 4),DAT_00186e50,0);
        if (local_3c == 0) {
          return iVar3;
        }
      }
      if (*(int *)(local_34 + 4) == 0) goto LAB_00186dee;
    }
    iVar3 = FUN_0017485c(param_1,local_24,*(undefined4 *)(local_34 + 4),param_1 + 0x78);
    if (iVar3 != 0) {
      return iVar3;
    }
    FUN_001712b4(param_1,local_24[0],0);
    uVar2 = local_24[0];
    iVar1 = local_34;
    local_2c = local_38;
    iVar3 = FUN_0017994c(param_1,&local_3c,2,*(undefined4 *)(param_1 + 0xa4),local_24[0]);
    if (iVar3 == 0) {
      if (iVar1 != 0) {
        FUN_001a4a80(*(undefined4 *)(iVar1 + 0x2c),local_3c,0);
      }
      iVar3 = FUN_001a688c(uVar2);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(local_3c + 4);
      FUN_001a77d8(local_3c,local_2c);
      FUN_001a77ee(local_3c,iVar1);
      FUN_001a7216(local_3c,iVar3);
      FUN_00179b24(param_1);
      iVar3 = 0;
    }
    else {
      FUN_001a52e0(uVar2);
    }
    if (iVar3 == 0) {
      FUN_001a3a18(*(undefined4 *)(local_34 + 4));
      *(undefined4 *)(local_34 + 4) = 0;
      FUN_001799e4(param_1);
      return 0;
    }
  }
  return iVar3;
}

