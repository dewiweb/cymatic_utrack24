// rea decompile_all
// name: FUN_0058fbb0
// address: 0x58fbb0
// body: available
// range: 0x58fbb0-0x58fd25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0058fbb0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CPNS::IInput_NotificationHandler::vftable;
  in_ECX[1] = CPNS::IBaseLocalDevice_SignalNotificationHandler::vftable;
  in_ECX[2] = CPNS::IOutput_ClockGeneratorNotificationHandler::vftable;
  in_ECX[3] = CPNS::IInput_ClockListenerControlNotificationHandler::vftable;
  in_ECX[4] = CPNS::ICHAI_Timer_NotificationHandler::vftable;
  in_ECX[5] = CPNS::ICHAI_GlobalTimer_NotificationHandler::vftable;
  *in_ECX = CPCHAI::CMIDITranslator::vftable;
  in_ECX[1] = CPCHAI::CMIDITranslator::vftable;
  in_ECX[2] = CPCHAI::CMIDITranslator::vftable;
  in_ECX[3] = CPCHAI::CMIDITranslator::vftable;
  in_ECX[4] = CPCHAI::CMIDITranslator::vftable;
  in_ECX[5] = CPCHAI::CMIDITranslator::vftable;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  in_ECX[0x11] = 3;
  in_ECX[6] = param_1;
  in_ECX[7] = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  *(undefined1 *)((int)in_ECX + 0x4d) = 0;
  *(undefined1 *)((int)in_ECX + 0x4f) = 0;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)((int)in_ECX + 0x51) = 1;
  in_ECX[0x15] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0xb] = 0;
  in_ECX[9] = 0;
  return in_ECX;
}

