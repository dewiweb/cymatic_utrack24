// rea decompile_all
// name: FUN_004675fb
// address: 0x4675fb
// body: available
// range: 0x4675fb-0x467646 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004675fb(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  DWORD DVar2;
  DWORD *pDVar3;
  uint uVar4;
  
  DVar2 = GetCurrentThreadId();
  FUN_00467a53();
  uVar4 = 0;
  if (0 < (int)in_EAX[7]) {
    pDVar3 = (DWORD *)in_EAX[5];
    do {
      if (*pDVar3 == DVar2) {
        pDVar3 = pDVar3 + 1;
        *pDVar3 = *pDVar3 - 1;
        if (*pDVar3 == 0) {
          if (uVar4 < (uint)in_EAX[7]) {
            FUN_0046eb7a();
          }
          FUN_0046d507();
        }
        break;
      }
      uVar4 = uVar4 + 1;
      pDVar3 = pDVar3 + 2;
    } while ((int)uVar4 < (int)in_EAX[7]);
  }
  LOCK();
  uVar1 = *in_EAX;
  *in_EAX = 0;
  UNLOCK();
  return uVar1;
}

