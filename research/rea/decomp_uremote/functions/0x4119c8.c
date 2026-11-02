// rea decompile_all
// name: FUN_004119c8
// address: 0x4119c8
// body: available
// range: 0x4119c8-0x411a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004119c8(int param_1,undefined4 *param_2)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int in_EDX;
  int unaff_EDI;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = in_EAX;
  if (((param_1 < 0) || (unaff_EDI < 0)) || (in_EDX < 0)) {
    local_8 = 6;
  }
  else if ((unaff_EDI == 0) || (in_EDX == 0)) {
    FUN_00411a5c();
    iVar1 = 0;
  }
  else if ((int)(0x7fffffff / (longlong)in_EDX) < unaff_EDI) {
    local_8 = 10;
  }
  else if (param_1 == 0) {
    iVar1 = FUN_00411912(in_EDX * unaff_EDI,&local_8);
  }
  else {
    iVar1 = (**(code **)(in_ECX + 0xc))();
    if (iVar1 == 0) {
      local_8 = 0x40;
      iVar1 = in_EAX;
    }
  }
  *param_2 = local_8;
  return iVar1;
}

