// rea decompile_all
// name: FUN_00414a5b
// address: 0x414a5b
// body: available
// range: 0x414a5b-0x414ae8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00414a5b(undefined4 param_1,uint param_2)

{
  int iVar1;
  short *unaff_ESI;
  undefined4 local_c;
  byte local_8;
  
  if ((param_2 & 0xffffff00) == 0) {
    FUN_00411560(param_1);
    return;
  }
  iVar1 = FUN_00411560(param_1,&local_c);
  if (iVar1 == 0) {
    *unaff_ESI = (byte)local_c - 0x80;
    unaff_ESI[1] = local_c._1_1_ - 0x80;
    unaff_ESI[2] = local_c._2_1_ - 0x80;
    unaff_ESI[3] = local_c._3_1_ - 0x80;
    unaff_ESI[4] = local_8 - 0x80;
    unaff_ESI[5] = 0;
  }
  return;
}

