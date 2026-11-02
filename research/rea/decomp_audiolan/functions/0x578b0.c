// rea decompile_all
// name: FUN_000578b0
// address: 0x578b0
// body: available
// range: 0x578b0-0x57a93 inclusive
// range: 0x57c44-0x57c8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x57c88 to 0x6e024 FUN_0006e024 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000578b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20 [2];
  
  if (*(char *)(param_1 + 0x118) != '\0') {
    FUN_000028a4(s_ERROR__SIPHandler__start__Alread_00057a94);
    return 1;
  }
  *(undefined4 *)(param_1 + 0x120) = param_3;
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  iVar1 = FUN_00187438();
  *(int *)(param_1 + 0x114) = iVar1;
  if (iVar1 == 0) {
    FUN_000028a4(s_ERROR__SIPHandler__start__eXosip_00057af0);
    return 0;
  }
  iVar1 = FUN_00187260();
  if (iVar1 == 0) {
    local_28 = 2;
    local_24 = (undefined4 *)0x0;
    iVar1 = FUN_00187378(*(undefined4 *)(param_1 + 0x114),param_3,0,param_2);
    if (iVar1 == 0) {
      if (((param_1 + 0x14c != 0) && (*(int *)(param_1 + 0x14c) != 0)) &&
         (iVar1 = FUN_0018e4b4(param_1 + 0x14c,&local_28,0x10), iVar1 != 0)) {
        FUN_000028a4(s_DEBUG__SIPHandler__start__Config_00057b5c,&local_28);
        FUN_00187468(*(undefined4 *)(param_1 + 0x114),&local_28,param_2);
      }
      if (*(char *)(param_1 + 0x145) != '\0') {
        if (*(int *)(*(int *)(param_1 + 0x150) + -4) != 0) {
          if (*(int *)(*(int *)(param_1 + 0x154) + -4) != 0) {
            FUN_000028a4(s_DEBUG__SIPHandler__start__Regist_00057b98);
            local_20[0] = 0;
            local_28 = *(undefined4 *)(param_1 + 0x148);
            local_24 = local_20;
            uVar2 = FUN_0018782c(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x150),
                                 *(undefined4 *)(param_1 + 0x154),0);
            *(undefined4 *)(param_1 + 0x124) = uVar2;
            FUN_000028a4(s_DEBUG__eXosip_register_build_ini_00057bcc,uVar2);
            if (-1 < *(int *)(param_1 + 0x124)) {
              if (*(char *)(param_1 + 0x146) != '\0') {
                if (((*(int *)(*(int *)(param_1 + 0x158) + -4) == 0) ||
                    (*(int *)(*(int *)(param_1 + 0x15c) + -4) == 0)) ||
                   (*(int *)(*(int *)(param_1 + 0x160) + -4) == 0)) {
                  FUN_000028a4(_DAT_00057c8c);
                }
                else {
                  local_28 = 0;
                  local_24 = (undefined4 *)0x0;
                  uVar2 = FUN_00185ae4(*(undefined4 *)(param_1 + 0x114));
                  FUN_000028a4(s_DEBUG__eXosip_add_authentication_00057c0c,uVar2);
                }
              }
              uVar2 = FUN_001878d4(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x124)
                                   ,local_20[0]);
              FUN_000028a4(s_l__DEBUG__eXosip_register_send_r_00057c8d + 3,uVar2);
            }
            goto LAB_00057c74;
          }
        }
        FUN_000028a4(s_ERROR__SIPHandler__start__Regist_00057cc4);
      }
LAB_00057c74:
      *(undefined1 *)(param_1 + 0x118) = 1;
      uVar2 = FUN_0006e024(param_1);
      return uVar2;
    }
    FUN_00187584(*(undefined4 *)(param_1 + 0x114));
    FUN_000028a4(s_ERROR__SIPHandler__start__eXosip_00057b24);
  }
  else {
    FUN_000028a4(s_ERROR__SIPHandler__start__eXosip_00057ac0);
    FUN_00187584(*(undefined4 *)(param_1 + 0x114));
  }
  return 0;
}

