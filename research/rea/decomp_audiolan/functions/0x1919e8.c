// rea decompile_all
// name: FUN_001919e8
// address: 0x1919e8
// body: available
// range: 0x1919e8-0x191ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x191a2a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001919e8(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ushort local_2c;
  uint uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  if (param_1 < 0x20) {
    puVar4 = (undefined4 *)(param_1 * 0x18 + DAT_00191ad8);
    if (((char *)*puVar4 != (char *)0x0) && (puVar4 != (undefined4 *)0x0)) {
      uStack_24 = param_1;
      local_20 = param_2;
      uStack_1c = param_3;
      uStack_18 = param_4;
      if (*(char *)*puVar4 == '\x10') {
        uVar1 = FUN_0019196c(param_1,param_2,param_3,param_4);
        return uVar1;
      }
      if (0xffff < param_3) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_00191b08,
                     s_lwip_sendto__size_must_fit_in_u1_00191ae4,DAT_00191ae0,DAT_00191adc);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      param_3 = param_3 & 0xffff;
      if ((param_5 != 0 || param_6 != 0) &&
         (((param_6 != 0x10 || (*(char *)(param_5 + 1) != '\x02')) || ((param_5 & 3) != 0)))) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_00191b08,
                     s_lwip_sendto__invalid_address_00191b40,DAT_00191b3c,DAT_00191adc);
        puVar4[4] = 5;
        return 0xffffffff;
      }
      local_34 = 0;
      local_38 = 0;
      if (param_5 == 0) {
        local_30 = 0;
        local_2c = 0;
      }
      else {
        local_30 = *(undefined4 *)(param_5 + 4);
        local_2c = *(ushort *)(param_5 + 2) >> 8 | *(ushort *)(param_5 + 2) << 8;
      }
      iVar2 = FUN_0019d000(&local_38,param_3);
      if (iVar2 == 0) {
        iVar2 = -2;
      }
      else {
        FUN_00003628(iVar2,local_20,param_3);
        iVar2 = FUN_0019e154(*puVar4,&local_38);
      }
      FUN_0019d1e8(&local_38);
      if ((uint)-iVar2 < 0x11) {
        uVar3 = *(undefined4 *)(DAT_00191b60 + iVar2 * -4);
      }
      else {
        uVar3 = 5;
      }
      puVar4[4] = uVar3;
      if (iVar2 == 0) {
        return param_3;
      }
    }
  }
  return 0xffffffff;
}

