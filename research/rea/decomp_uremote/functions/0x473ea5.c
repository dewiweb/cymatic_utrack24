// rea decompile_all
// name: FUN_00473ea5
// address: 0x473ea5
// body: available
// range: 0x473ea5-0x473fa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00473ea5(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  
  iVar1 = DAT_0095d67c;
  if (DAT_0095d67c == 0) {
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_00473e1e();
    if (cVar2 == '\0') {
      lpCriticalSection = (LPCRITICAL_SECTION)(iVar1 + 0x10);
      if (param_1 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      else {
        while (cVar2 = FUN_0046d4d4(lpCriticalSection), cVar2 == '\0') {
          if (*(char *)(param_1 + 0x38) != '\0') goto LAB_00473fa1;
          FUN_0046d647();
        }
      }
      puVar4 = (undefined4 *)FUN_005af82d(0x10);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = juce::ReferenceCountedObject::vftable;
        puVar4[1] = 0;
        *puVar4 = juce::MessageManagerLock::BlockingMessage::vftable;
        FUN_0046d4ed();
        FUN_0046d4ed();
      }
      FUN_004a4d78();
      cVar2 = FUN_00473c1d();
      if (cVar2 == '\0') {
        FUN_004a4d78();
      }
      else {
        do {
          cVar2 = FUN_0046d510(0x14);
          if (cVar2 != '\0') {
            DVar5 = GetCurrentThreadId();
            *(DWORD *)(iVar1 + 0xc) = DVar5;
            return 1;
          }
        } while ((param_1 == 0) || (*(char *)(param_1 + 0x38) == '\0'));
        FUN_0046d507();
        FUN_004a4d78();
        LeaveCriticalSection(lpCriticalSection);
      }
LAB_00473fa1:
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

