// rea decompile_all
// name: FUN_00467562
// address: 0x467562
// body: available
// range: 0x467562-0x4675fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00467562(void)

{
  uint *in_EAX;
  DWORD DVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  
  DVar1 = GetCurrentThreadId();
  FUN_00467a53();
  iVar4 = 0;
  if (0 < (int)in_EAX[7]) {
    pDVar2 = (DWORD *)in_EAX[5];
    do {
      if (*pDVar2 == DVar1) {
        pDVar2[1] = pDVar2[1] + 1;
        goto LAB_004675f0;
      }
      iVar4 = iVar4 + 1;
      pDVar2 = pDVar2 + 2;
    } while (iVar4 < (int)in_EAX[7]);
  }
  if ((in_EAX[2] + in_EAX[3] == 0) || ((DVar1 == in_EAX[4] && (0 < (int)in_EAX[3])))) {
    if ((int)in_EAX[6] < (int)(in_EAX[7] + 1)) {
      FUN_004f792c();
    }
    uVar3 = in_EAX[7];
    in_EAX[7] = uVar3 + 1;
    pDVar2 = (DWORD *)(in_EAX[5] + uVar3 * 8);
    if (pDVar2 != (DWORD *)0x0) {
      *pDVar2 = DVar1;
      pDVar2[1] = 1;
    }
LAB_004675f0:
    LOCK();
    uVar3 = *in_EAX;
    *in_EAX = 0;
    UNLOCK();
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    LOCK();
    uVar3 = *in_EAX;
    *in_EAX = 0;
    UNLOCK();
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}

