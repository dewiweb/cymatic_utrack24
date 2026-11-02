// rea decompile_all
// name: FUN_0018dfe8
// address: 0x18dfe8
// body: available
// range: 0x18dfe8-0x18e1ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18e006 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x18e0a4 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0018dfe8(int param_1,int *param_2,uint *param_3,uint param_4,int param_5,int param_6,int param_7
            ,undefined4 param_8,uint param_9)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint local_30;
  uint local_2c [2];
  int iStack_24;
  int *local_20;
  uint *local_1c;
  uint local_18;
  
  uVar10 = 0;
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (*(short *)(param_1 + 0xe) != 1) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0018e1bc,s_X___p_>ref____1_0018e1ac + 4,0x29c,
                 s_X___p_>ref____1_0018e1ac._0_4_);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  if (param_3 == (uint *)0x0) {
    local_2c[0] = *(uint *)(*(int *)(param_1 + 4) + 0x10);
    local_1c = local_2c;
  }
  else {
    local_30 = 0x14;
    if (param_9 != 0) {
      uVar8 = param_9 + 3 & DAT_0018e1f0;
      local_30 = uVar8 + 0x14 & 0xffff;
      iVar4 = FUN_001aa160(param_1,(int)(short)uVar8);
      if (iVar4 != 0) {
        return 0xfffffffd;
      }
      FUN_00003628(*(undefined4 *)(param_1 + 4),param_8,param_9);
      if (param_9 < uVar8) {
        FUN_00003860(*(int *)(param_1 + 4) + param_9,uVar8 - param_9);
      }
      if (1 < uVar8) {
        bVar11 = (uVar8 >> 1 & 1) != 0;
        if (bVar11) {
          uVar10 = (uint)**(ushort **)(param_1 + 4);
        }
        uVar5 = (uint)bVar11;
        iVar4 = 0;
        uVar8 = uVar8 >> 2;
        if (uVar8 != 0) {
          do {
            iVar9 = uVar5 * 2;
            uVar10 = *(ushort *)(*(int *)(param_1 + 4) + iVar9) + uVar10;
            uVar5 = uVar5 + 2;
            iVar4 = (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar9 + 2) + iVar4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar10 = uVar10 + iVar4;
      }
    }
    iVar4 = FUN_001aa160(param_1,0x14);
    if (iVar4 != 0) {
      return 0xfffffffd;
    }
    puVar7 = *(undefined1 **)(param_1 + 4);
    if (*(ushort *)(param_1 + 10) < 0x14) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_0018e1bc,
                   s_check_that_first_pbuf_can_hold_s_0018e1f8,DAT_0018e1f4,
                   s_X___p_>ref____1_0018e1ac._0_4_);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    puVar7[8] = (char)local_18;
    puVar7[9] = (char)param_6;
    uVar8 = *local_1c;
    puVar7[0x10] = (char)uVar8;
    puVar7[0x11] = (char)(uVar8 >> 8);
    puVar7[0x12] = (char)(uVar8 >> 0x10);
    puVar7[0x13] = (char)(uVar8 >> 0x18);
    uVar5 = local_30 >> 2 & 0xff | 0x40;
    *puVar7 = (char)uVar5;
    puVar7[1] = (char)param_5;
    uVar1 = *(ushort *)(param_1 + 8);
    puVar7[2] = (char)(uVar1 >> 8);
    puVar7[3] = (char)uVar1;
    puVar7[6] = 0;
    puVar3 = DAT_0018e228;
    puVar7[7] = 0;
    uVar2 = *puVar3;
    puVar7[4] = (char)(uVar2 >> 8);
    puVar7[5] = (char)uVar2;
    *puVar3 = uVar2 + 1;
    if ((local_20 == (int *)0x0) || (iVar4 = *local_20, iVar4 == 0)) {
      iVar4 = *(int *)(param_7 + 4);
    }
    puVar7[0xc] = (char)iVar4;
    puVar7[0xd] = (char)((uint)iVar4 >> 8);
    puVar7[0xe] = (char)((uint)iVar4 >> 0x10);
    puVar7[0xf] = (char)((uint)iVar4 >> 0x18);
    uVar10 = (*(uint *)(puVar7 + 0xc) >> 0x10) +
             (uint)(ushort)*(uint *)(puVar7 + 0xc) +
             ((uint)(uVar2 >> 8) | (uVar2 & 0xff) << 8) +
             ((uint)(uVar1 >> 8) | (uVar1 & 0xff) << 8) +
             (param_5 << 8 | uVar5) +
             (uVar8 >> 0x10) + (uVar8 & 0xffff) + (param_6 << 8 | local_18) + uVar10;
    uVar10 = (uVar10 >> 0x10) + (uVar10 & 0xffff);
    uVar10 = ~((uVar10 >> 0x10) + uVar10);
    puVar7[10] = (char)uVar10;
    puVar7[0xb] = (char)(uVar10 >> 8);
  }
  uVar6 = (**(code **)(param_7 + 0x14))(param_7,param_1,local_1c);
  return uVar6;
}

