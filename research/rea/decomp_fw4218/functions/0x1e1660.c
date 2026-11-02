// rea decompile_all
// name: FUN_001e1660
// address: 0x1e1660
// body: available
// range: 0x1e1660-0x1e183b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e1732 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1e1760 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001e1660(uint param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *local_50;
  int local_4c;
  uint local_48;
  ushort local_44 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c [2];
  uint uStack_24;
  int local_20;
  uint uStack_1c;
  uint local_18;
  
  iVar6 = 0;
  local_50 = (undefined4 *)0x0;
  local_4c = 0;
  if (((0x1f < param_1) || (piVar5 = (int *)(param_1 * 0x18 + DAT_001e183c), *piVar5 == 0)) ||
     (uStack_24 = param_1, local_20 = param_2, uStack_1c = param_3, local_18 = param_4,
     piVar5 == (int *)0x0)) {
    return -1;
  }
  do {
    puVar2 = (undefined4 *)piVar5[1];
    if ((undefined4 *)piVar5[1] == (undefined4 *)0x0) {
      if ((((int)(local_18 << 0x1c) < 0) || ((int)((uint)*(byte *)(*piVar5 + 0xb8) << 0x1e) < 0)) &&
         (*(short *)((int)piVar5 + 10) < 1)) {
        if (iVar6 < 1) {
          piVar5[4] = 0xb;
          return -1;
        }
        goto LAB_001e16aa;
      }
      if (*(char *)*piVar5 == '\x10') {
        iVar3 = FUN_001ee090((char *)*piVar5,&local_50);
      }
      else {
        iVar3 = FUN_001edd4c();
      }
      if (iVar3 != 0) {
        if (iVar6 < 1) {
          if ((uint)-iVar3 < 0x11) {
            iVar6 = *(int *)(DAT_001e1840 + iVar3 * -4);
          }
          else {
            iVar6 = 5;
          }
          piVar5[4] = iVar6;
          if (iVar3 != -0xd) {
            return -1;
          }
          return 0;
        }
        goto LAB_001e16aa;
      }
      if (local_50 == (undefined4 *)0x0) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001e1858,s_buf____NULL_001e184c,DAT_001e1848
                     ,DAT_001e1844);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      piVar5[1] = (int)local_50;
      puVar2 = local_50;
    }
    local_50 = puVar2;
    local_40 = local_50;
    if (*(char *)*piVar5 != '\x10') {
      local_40 = (undefined4 *)*local_50;
    }
    local_48 = (uint)*(ushort *)(local_40 + 2) - (uint)*(ushort *)(piVar5 + 2) & 0xffff;
    uVar7 = local_48;
    if (param_3 <= local_48) {
      uVar7 = param_3 & 0xffff;
    }
    FUN_001f0e88(local_40,local_20 + iVar6,uVar7);
    iVar6 = iVar6 + uVar7;
    cVar1 = *(char *)*piVar5;
    if (cVar1 == '\x10') {
      if (param_3 < uVar7) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001e1858,
                     s_invalid_copylen__len_would_under_001e1890,DAT_001e188c,DAT_001e1844);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      param_3 = param_3 - uVar7;
      if (((param_3 == 0) || ((*(byte *)((int)local_40 + 0xd) & 1) != 0)) ||
         ((*(short *)((int)piVar5 + 10) < 1 || ((local_18 & 1) != 0)))) goto LAB_001e177e;
LAB_001e17f6:
      if ((int)(local_48 - uVar7) < 1) {
LAB_001e180a:
        piVar5[1] = 0;
        *(undefined2 *)(piVar5 + 2) = 0;
        if (*(char *)*piVar5 == '\x10') {
          FUN_001f0fa0(local_50);
        }
        else {
          FUN_001ed2c8();
        }
      }
      else {
        piVar5[1] = (int)local_50;
        *(short *)(piVar5 + 2) = (short)piVar5[2] + (short)uVar7;
      }
    }
    else {
LAB_001e177e:
      local_4c = 1;
      if ((param_5 != 0) && (param_6 != (uint *)0x0)) {
        if (cVar1 == '\x10') {
          local_30 = local_2c;
          FUN_001ed868((char *)*piVar5,local_30,local_44,0);
        }
        else {
          local_30 = local_50 + 2;
          local_44[0] = *(ushort *)(local_50 + 3);
        }
        local_38 = 0;
        local_34 = 0;
        local_40 = (undefined4 *)CONCAT22(local_44[0] >> 8 | local_44[0] << 8,0x210);
        local_3c = *local_30;
        uVar4 = *param_6;
        if (0x10 < uVar4) {
          uVar4 = 0x10;
        }
        *param_6 = uVar4;
        FUN_000039e0(param_5,&local_40);
      }
      if ((local_18 & 1) == 0) {
        if (*(char *)*piVar5 == '\x10') goto LAB_001e17f6;
        goto LAB_001e180a;
      }
    }
  } while (local_4c == 0);
  if (0 < iVar6) {
LAB_001e16aa:
    FUN_001ee10c(*piVar5,iVar6);
  }
  piVar5[4] = 0;
  return iVar6;
}

