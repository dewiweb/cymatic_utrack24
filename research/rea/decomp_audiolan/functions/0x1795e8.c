// rea decompile_all
// name: FUN_001795e8
// address: 0x1795e8
// body: available
// range: 0x1795e8-0x179811 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001795e8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  
  local_2c = 0;
  local_28 = 0;
  local_1c[0] = -2;
  if ((param_2 != 0) && ((param_3 == 0 || (*(int *)(param_3 + 0x2c) != 0)))) {
    if (((param_4 == 0) && (param_4 = FUN_001746cc(param_2,param_3), param_4 == 0)) ||
       ((*(int *)(param_4 + 0x20) == 0 || (*(int *)(param_4 + 0x24) == 0)))) {
      local_1c[0] = -6;
    }
    else {
      local_1c[0] = FUN_001a4d9c(*(int *)(param_4 + 0x20),&local_28);
      if (local_1c[0] == 0) {
        FUN_001a7c44(*(int *)(local_28 + 0xac) + 8,&DAT_00179814,local_1c);
        if ((((local_1c[0] == 0) && (param_3 != 0)) && (*(int *)(param_3 + 4) != 0)) &&
           (*(int *)(*(int *)(param_3 + 4) + 8) != 0)) {
          local_24 = FUN_001a6f50();
          uVar2 = FUN_001a6f50(&DAT_00179814);
          FUN_001a7adc(*(int *)(local_28 + 0xac) + 8,uVar2,local_24);
        }
        iVar1 = FUN_001a4bdc(local_28 + 0xb0,0);
        if (((iVar1 != 0) && (*(int *)(local_28 + 0x70) != 0)) &&
           (*(int *)(*(int *)(local_28 + 0x70) + 4) != 0)) {
          local_20 = FUN_0000317c();
          if (*(int *)(*(int *)(local_28 + 0x70) + 4) != 0) {
            if ((code *)*DAT_00179818 == entry) {
              FUN_0018a280();
            }
            else {
              (*(code *)*DAT_00179818)();
            }
          }
          iVar1 = FUN_00179370(&DAT_0017981c,local_20 + 1);
          *(int *)(*(int *)(local_28 + 0x70) + 4) = iVar1;
          if (iVar1 == 0) {
            FUN_001a52e0(local_28);
            return -4;
          }
          if ((param_3 != 0) && (iVar1 = *(int *)(param_3 + 4), iVar1 != 0)) {
            *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
          }
          iVar1 = FUN_00179ab4(local_28);
          if (iVar1 == 0) {
            FUN_001a4d54(local_28 + 0x44,_DAT_00179820);
            FUN_001a4d54(local_28 + 0x94,_DAT_00179820);
            iVar1 = *(int *)(param_4 + 0x24);
            if ((*(int *)(iVar1 + 0xc) != 0x191) && (*(int *)(iVar1 + 0xc) != 0x197)) {
              iVar1 = 0;
            }
            FUN_001712b4(param_1,local_28,iVar1);
            if ((*(int *)(param_4 + 0x24) != 0) &&
               (*(int *)(*(int *)(param_4 + 0x24) + 0xc) == 0x1a7)) {
              FUN_001a56f2(local_28,s__expires_00179823 + 1,0,&local_24);
              FUN_001a56f2(*(undefined4 *)(param_4 + 0x24),s_min_expires_0017982c,0,&local_20);
              if ((local_24 == 0) ||
                 (((*(int *)(local_24 + 4) == 0 || (local_20 == 0)) || (*(int *)(local_20 + 4) == 0)
                  ))) goto LAB_001797b2;
              if ((code *)*DAT_00179818 == entry) {
                FUN_0018a280();
              }
              else {
                (*(code *)*DAT_00179818)();
              }
              uVar2 = FUN_001a6f50(*(undefined4 *)(local_20 + 4));
              *(undefined4 *)(local_24 + 4) = uVar2;
            }
            FUN_001a52cc(local_28);
            iVar1 = FUN_0017994c(param_1,&local_2c,2,*(undefined4 *)(param_1 + 0xa4),local_28);
            if (iVar1 == 0) {
              if (*(int *)(param_2 + 0x1c) == param_4) {
                FUN_001a4a80(param_1 + 0x9c,*(int *)(param_2 + 0x1c),0);
                *(undefined4 *)(param_2 + 0x1c) = local_2c;
              }
              else {
                FUN_001a4a80(*(undefined4 *)(param_3 + 0x2c),local_2c,0);
              }
              uVar2 = FUN_001a688c(local_28);
              FUN_001a781a(local_2c,param_2);
              FUN_001a77ee(local_2c,param_3);
              FUN_001a7216(local_2c,uVar2);
              FUN_001799e4(param_1);
              FUN_00179b24(param_1);
              return 0;
            }
          }
          FUN_001a52e0(local_28);
          return iVar1;
        }
LAB_001797b2:
        FUN_001a52e0(local_28);
        return -5;
      }
    }
  }
  return local_1c[0];
}

