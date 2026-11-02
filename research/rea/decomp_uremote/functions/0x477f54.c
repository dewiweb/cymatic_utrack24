// rea decompile_all
// name: FUN_00477f54
// address: 0x477f54
// body: available
// range: 0x477f54-0x477fa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00477f54(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  void *pvVar3;
  void *_Memory;
  undefined4 *unaff_ESI;
  undefined4 local_4;
  
  if (in_EAX != unaff_ESI[5]) {
    iVar1 = in_EAX * 2 + 1;
    unaff_ESI[5] = in_EAX;
    iVar2 = FUN_00477ded(iVar1);
    pvVar3 = _malloc(iVar2 << 2);
    FUN_00477e3b(pvVar3,unaff_ESI[4]);
    _Memory = pvVar3;
    if (unaff_ESI != &local_4) {
      _Memory = (void *)*unaff_ESI;
      *unaff_ESI = pvVar3;
    }
    unaff_ESI[6] = iVar1;
    _free(_Memory);
  }
  return;
}

