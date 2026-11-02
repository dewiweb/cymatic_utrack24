// rea decompile_all
// name: FUN_00412f94
// address: 0x412f94
// body: available
// range: 0x412f94-0x41300f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00412f94(void)

{
  char *in_EAX;
  FILE *_File;
  undefined4 uVar1;
  long lVar2;
  undefined4 *unaff_ESI;
  
  if (unaff_ESI == (undefined4 *)0x0) {
    return 0x28;
  }
  unaff_ESI[3] = 0;
  unaff_ESI[4] = in_EAX;
  *unaff_ESI = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  _File = _fopen(in_EAX,"rb");
  if (_File == (FILE *)0x0) {
    uVar1 = 1;
  }
  else {
    _fseek(_File,0,2);
    lVar2 = _ftell(_File);
    unaff_ESI[1] = lVar2;
    if (lVar2 == 0) {
      _fclose(_File);
      uVar1 = 0x51;
    }
    else {
      _fseek(_File,0,0);
      unaff_ESI[3] = _File;
      unaff_ESI[5] = FUN_00412f50;
      unaff_ESI[6] = FUN_00412f36;
      uVar1 = 0;
    }
  }
  return uVar1;
}

