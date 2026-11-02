// rea decompile_all
// name: FUN_0018c5f0
// address: 0x18c5f0
// body: available
// range: 0x18c5f0-0x18c79f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18c670 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x18c698 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x18c6b4 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x18c6d2 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x18c6fa to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x18c77c to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018c5f0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int iVar9;
  
  pbVar8 = *(byte **)(param_1 + 4);
  iVar9 = (*pbVar8 & 0xf) * 4;
  iVar5 = (*pbVar8 & 0xf) * -4;
  iVar2 = FUN_001aa160(param_1);
  if ((((iVar2 == 0) && (3 < *(ushort *)(param_1 + 8))) && (**(char **)(param_1 + 4) != '\0')) &&
     (**(char **)(param_1 + 4) == '\b')) {
    uVar3 = *_DAT_0018c7a0;
    iVar2 = FUN_0018dcc4(uVar3,param_2);
    if (((iVar2 == 0) && ((uVar3 & 0xff) >> 4 != 0xe)) &&
       ((7 < *(ushort *)(param_1 + 8) && (iVar2 = FUN_0018d5be(param_1), iVar2 == 0)))) {
      iVar2 = FUN_001aa160(param_1,0x24);
      if (iVar2 == 0) {
        iVar5 = FUN_001aa160(param_1,0xffffffdc);
        if (iVar5 != 0) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_0018c7dc,
                       s_icmp_input__restoring_original_p_0018c870,0xb5,
                       s_1__d___icmp_input__moving_p_>pay_0018c7a1._3_4_);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
      }
      else {
        iVar2 = FUN_001aa160(param_1,iVar9);
        if (iVar2 != 0) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_0018c7dc,
                       s_1__d___icmp_input__moving_p_>pay_0018c7a1 + 7,0x98,
                       s_1__d___icmp_input__moving_p_>pay_0018c7a1._3_4_);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
        iVar2 = FUN_001a9890(2,*(undefined2 *)(param_1 + 8),0);
        if (iVar2 == 0) goto LAB_0018c796;
        if ((uint)*(ushort *)(iVar2 + 10) < iVar9 + 8U) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_0018c7dc,
                       s_check_that_first_pbuf_can_hold_s_0018c810,0xa1,
                       s_1__d___icmp_input__moving_p_>pay_0018c7a1._3_4_);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
        iVar4 = FUN_001a9cf4(iVar2,param_1);
        if (iVar4 != 0) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_0018c7dc,
                       s_icmp_input__copying_to_new_pbuf_f_0018c848,0xa5,
                       s_1__d___icmp_input__moving_p_>pay_0018c7a1._3_4_);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
        pbVar8 = *(byte **)(iVar2 + 4);
        iVar5 = FUN_001aa160(iVar2,iVar5);
        if (iVar5 != 0) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_0018c7dc,
                       s_icmp_input__restoring_original_p_0018c870,0xab,
                       s_1__d___icmp_input__moving_p_>pay_0018c7a1._3_4_);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
        FUN_001aa008(param_1);
        param_1 = iVar2;
      }
      puVar7 = *(undefined1 **)(param_1 + 4);
      uVar3 = *_DAT_0018c7a0;
      pbVar8[0xc] = (byte)uVar3;
      pbVar8[0xd] = (byte)(uVar3 >> 8);
      pbVar8[0xe] = (byte)(uVar3 >> 0x10);
      pbVar8[0xf] = (byte)(uVar3 >> 0x18);
      uVar6 = *DAT_0018c8a4;
      pbVar8[0x10] = (byte)uVar6;
      pbVar8[0x11] = (byte)((uint)uVar6 >> 8);
      pbVar8[0x12] = (byte)((uint)uVar6 >> 0x10);
      pbVar8[0x13] = (byte)((uint)uVar6 >> 0x18);
      *puVar7 = 0;
      uVar3 = (uint)*(ushort *)(puVar7 + 2);
      if (uVar3 < DAT_0018c8a8) {
        puVar7[2] = (char)(uVar3 + 8);
        puVar7[3] = (char)(uVar3 + 8 >> 8);
      }
      else {
        puVar7[2] = (char)(uVar3 + 9);
        puVar7[3] = (char)(uVar3 + 9 >> 8);
      }
      pbVar8[8] = 0xff;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      uVar1 = FUN_0018d5b0(pbVar8,0x14);
      pbVar8[10] = (byte)uVar1;
      pbVar8[0xb] = (byte)((ushort)uVar1 >> 8);
      iVar5 = FUN_001aa160(param_1,iVar9);
      if (iVar5 != 0) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_0018c7dc,
                     s_Can_t_move_over_header_in_packet_0018c8ac,0xda,
                     s_1__d___icmp_input__moving_p_>pay_0018c7a1._3_4_);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      FUN_0018dfcc(param_1,_DAT_0018c7a0,0,0xff,0,1,param_2);
    }
  }
LAB_0018c796:
  FUN_001aa008(param_1);
  return;
}

