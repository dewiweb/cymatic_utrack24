// rea decompile_all
// name: FUN_005290b0
// address: 0x5290b0
// body: available
// range: 0x5290b0-0x5291a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005290b0(void)

{
  char *_Dest;
  undefined4 *in_ECX;
  int local_c;
  
  FUN_00513420();
  _Dest = (char *)FUN_005b04d6(0x100);
  _sprintf(_Dest,"#Objects: %d\n#Max Objects: %d\n",*in_ECX,in_ECX[0x18]);
  FUN_00502720(_Dest);
  FUN_00502720("Object list dump\n");
  for (local_c = FUN_00512850(); local_c != 0; local_c = FUN_00512890(local_c)) {
    _sprintf(_Dest,"    [0x%8p]%04x (ID%u)(HC%u)\r\n",local_c,(uint)*(ushort *)(local_c + 0x14),
             *(undefined4 *)(local_c + 8),*(undefined4 *)(local_c + 0xc));
    FUN_00502720(_Dest);
  }
  FUN_005b13e8(_Dest);
  LOCK();
  in_ECX[2] = in_ECX[2] + -1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 3));
  return;
}

