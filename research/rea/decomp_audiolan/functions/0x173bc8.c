// rea decompile_all
// name: FUN_00173bc8
// address: 0x173bc8
// body: available
// range: 0x173bc8-0x173d09 inclusive
// range: 0x173d10-0x173df9 inclusive
// range: 0x1741f8-0x174203 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00173bc8(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(code **)s_x2__No_answer_for_this_Call__00173dfc._0_4_ == entry) {
    iVar1 = FUN_0019b388(0x138);
  }
  else {
    iVar1 = (**(code **)s_x2__No_answer_for_this_Call__00173dfc._0_4_)(0x138);
  }
  *param_1 = iVar1;
  if (iVar1 != 0) {
    FUN_000038a0(iVar1,0x138);
    *(char *)*param_1 = (char)param_2;
    if (param_2 == 4) {
      pcVar2 = s_x2__No_answer_for_this_Call__00173dfc + 4;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 5) {
      pcVar2 = s_Call_is_being_processed__00173e1c;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 6) {
      pcVar2 = s_Remote_phone_is_ringing__00173e38;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 7) {
      pcVar2 = s_Remote_phone_has_answered__00173e54;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 8) {
      pcVar2 = s_Call_is_redirected__00173e70;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 9) {
      pcVar2 = s_4xx_received_for_Call__00173e84;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 10) {
      pcVar2 = s_5xx_received_for_Call__00173e9c;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0xb) {
      pcVar2 = s_6xx_received_for_Call__00173eb4;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 2) {
      pcVar2 = s_New_call_received__00173ecc;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0xc) {
      pcVar2 = s_ACK_received__00173ee0;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0xd) {
      pcVar2 = s_Call_has_been_cancelled__00173ef0;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 3) {
      pcVar2 = s_INVITE_within_call_received__00173f0c;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x15) {
      pcVar2 = s_Bye_Received__00173f2c;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x16) {
      pcVar2 = s_Call_Context_is_released__00173f3c;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0) {
      pcVar2 = s_User_is_successfully_registred__00173f58;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 1) {
      pcVar2 = s_Registration_failed__00173f78;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0xe) {
      pcVar2 = s_New_request_received__00173f90;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0xf) {
      pcVar2 = s_request_is_being_processed__00173fa8;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x10) {
      pcVar2 = s_2xx_received_for_request__00173fc4;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x11) {
      pcVar2 = s_3xx_received_for_request__00173fe0;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x12) {
      pcVar2 = s_4xx_received_for_request__00173ffc;
      iVar1 = *param_1 + 1;
    }
    else if ((param_2 == 0x13) || (param_2 == 0x14)) {
      pcVar2 = s_5xx_received_for_request__00174018;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x17) {
      pcVar2 = s_New_request_outside_call_receive_00174034;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x18) {
      pcVar2 = s_request_outside_call_is_being_pr_00174058;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x19) {
      pcVar2 = s_2xx_received_for_request_outside_00174084;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x1a) {
      pcVar2 = s_3xx_received_for_request_outside_001740ac;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x1b) {
      pcVar2 = s_4xx_received_for_request_outside_001740d4;
      iVar1 = *param_1 + 1;
    }
    else if ((param_2 == 0x1c) || (param_2 == 0x1d)) {
      pcVar2 = s_5xx_received_for_request_outside_001740fc;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x1e) {
      pcVar2 = s_No_answer_for_this_SUBSCRIBE__00174124;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x1f) {
      pcVar2 = s_SUBSCRIBE_is_being_processed__00174144;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x20) {
      pcVar2 = s_2xx_received_for_SUBSCRIBE__00174164;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x21) {
      pcVar2 = s_3xx_received_for_SUBSCRIBE__00174180;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x22) {
      pcVar2 = s_4xx_received_for_SUBSCRIBE__0017419c;
      iVar1 = *param_1 + 1;
    }
    else if ((param_2 == 0x23) || (param_2 == 0x24)) {
      pcVar2 = s_5xx_received_for_SUBSCRIBE__001741b8;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x25) {
      pcVar2 = s_NOTIFY_request_for_subscription__001741d4;
      iVar1 = *param_1 + 1;
    }
    else if (param_2 == 0x26) {
      iVar1 = *param_1 + 1;
      pcVar2 = s_New_incoming_SUBSCRIBE__00174204;
    }
    else {
      if (param_2 != 0x2e) {
        *(undefined1 *)(*param_1 + 1) = 0;
        return 0;
      }
      pcVar2 = s_Session_timed_out__0017421c;
      iVar1 = *param_1 + 1;
    }
    FUN_000028d8(iVar1,pcVar2);
    return 0;
  }
  return 0xfffffffc;
}

