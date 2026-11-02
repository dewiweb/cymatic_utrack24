// rea decompile_all
// name: FUN_001789a8
// address: 0x1789a8
// body: available
// range: 0x1789a8-0x178bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001789a8(int param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_3c;
  int local_38 [3];
  int local_2c;
  int local_24;
  int iStack_20;
  int *piStack_1c;
  int *piStack_18;
  
  iVar4 = -2;
  local_3c = 0;
  local_38[0] = 0;
  if (param_3 != (int *)0x0) {
    if ((param_2 != 0) && (*(int *)(param_2 + 0x2c) == 0)) {
      return -1;
    }
    iVar5 = *param_3;
    if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) && (*(int *)(iVar5 + 0x24) != 0)) {
      if ((param_4 != (int *)0x0) && (2 < *param_4)) {
        return -1;
      }
      local_24 = param_1;
      iStack_20 = param_2;
      piStack_1c = param_3;
      piStack_18 = param_4;
      iVar4 = FUN_001a4d9c(*(int *)(iVar5 + 0x20),local_38);
      if (iVar4 == 0) {
        iVar4 = FUN_001a4bdc(local_38[0] + 0xb0,0);
        if (((iVar4 == 0) || (*(int *)(local_38[0] + 0x70) == 0)) ||
           (*(int *)(*(int *)(local_38[0] + 0x70) + 4) == 0)) {
          FUN_001a52e0(local_38[0]);
          return -5;
        }
        local_2c = FUN_0000317c();
        if (*(int *)(*(int *)(local_38[0] + 0x70) + 4) != 0) {
          if ((code *)*DAT_00178bc0 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_00178bc0)();
          }
        }
        uVar1 = FUN_00179370(&DAT_00178bc4,local_2c + 1);
        *(undefined4 *)(*(int *)(local_38[0] + 0x70) + 4) = uVar1;
        if ((param_2 != 0) && (iVar4 = *(int *)(param_2 + 4), iVar4 != 0)) {
          *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        }
        iVar4 = FUN_00179ab4(local_38[0]);
        if (iVar4 == 0) {
          FUN_001a4d54(local_38[0] + 0x44,_DAT_00178bc8);
          FUN_001a4d54(local_38[0] + 0x94,_DAT_00178bc8);
          if ((*(int *)(iVar5 + 0x24) == 0) ||
             ((iVar4 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc), iVar4 != 0x191 && (iVar4 != 0x197))))
          {
            iVar4 = FUN_001712b4(local_24,local_38[0],0);
          }
          else {
            iVar4 = FUN_001712b4(local_24,local_38[0]);
          }
          if (-1 < iVar4) {
            FUN_001a52cc(local_38[0]);
            iVar4 = local_24;
            if ((*(int *)(local_38[0] + 0xc) == 0) &&
               (iVar2 = FUN_00003960(*(undefined4 *)(local_38[0] + 8),s__INVITE_00178bcb + 1),
               iVar2 == 0)) {
              iVar4 = FUN_0017994c(local_24,&local_3c,0,*(undefined4 *)(iVar4 + 0xa4),local_38[0]);
            }
            else {
              iVar4 = FUN_0017994c(local_24,&local_3c,2,*(undefined4 *)(iVar4 + 0xa4),local_38[0]);
            }
            if (iVar4 == 0) {
              iVar4 = local_24 + 0x9c;
              if ((*(int *)(local_38[0] + 0xc) == 0) &&
                 (iVar2 = FUN_00003960(*(undefined4 *)(local_38[0] + 8),s_PUBLISH_00178bd4),
                 iVar2 == 0)) {
                FUN_001a4a80(iVar4,iVar5,0);
                *param_3 = local_3c;
              }
              else {
                FUN_001a4a80(iVar4,local_3c,0);
              }
              uVar1 = FUN_001a688c(local_38[0]);
              uVar3 = FUN_001a7486(iVar5);
              FUN_001a77d8(iVar5,0);
              FUN_001a77d8(local_3c,uVar3);
              uVar3 = FUN_001a7494(iVar5);
              FUN_001a77ee(iVar5,0);
              FUN_001a77ee(local_3c,uVar3);
              uVar3 = FUN_001a74a2(iVar5);
              FUN_001a7804(iVar5,0);
              FUN_001a7804(local_3c,uVar3);
              uVar3 = FUN_001a74b0(iVar5);
              FUN_001a781a(iVar5,0);
              FUN_001a781a(local_3c,uVar3);
              FUN_001a7216(local_3c,uVar1);
              if (param_4 != (int *)0x0) {
                *param_4 = *param_4 + 1;
              }
              FUN_001799e4(local_24);
              return 0;
            }
          }
        }
        FUN_001a52e0(local_38[0]);
        return iVar4;
      }
    }
  }
  return iVar4;
}

