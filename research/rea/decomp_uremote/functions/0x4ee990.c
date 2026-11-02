// rea decompile_all
// name: FUN_004ee990
// address: 0x4ee990
// body: available
// range: 0x4ee990-0x4ee9f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ee990(void)

{
  int iVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  int *unaff_EDI;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  (**(code **)(*in_EAX + 0xb8))(&local_20);
  cVar2 = FUN_004ef621();
  if (cVar2 == '\0') {
    iVar1 = in_EAX[6];
    local_10 = local_14 + local_1c;
    local_c = local_20;
    local_8 = local_1c;
    iVar3 = FUN_004ee96c();
    *unaff_EDI = local_8;
    unaff_EDI[1] = local_c;
    unaff_EDI[2] = iVar1 - local_10;
  }
  else {
    iVar3 = 0;
    *unaff_EDI = 0;
    unaff_EDI[1] = 0;
    unaff_EDI[2] = 0;
  }
  unaff_EDI[3] = iVar3;
  return;
}

