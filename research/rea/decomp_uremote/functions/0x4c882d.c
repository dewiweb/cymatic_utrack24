// rea decompile_all
// name: FUN_004c882d
// address: 0x4c882d
// body: available
// range: 0x4c882d-0x4c88e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c882d(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  undefined4 local_c;
  
  FUN_004c1613(in_ECX);
  local_c = 0x3f800000;
  cVar1 = FUN_004c3153();
  if (cVar1 == '\0') {
    cVar1 = FUN_004bf38c(in_ECX);
    piVar3 = in_ECX + 0x3f;
    if (cVar1 == '\0') {
      piVar3 = in_ECX + 0x3b;
    }
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      local_c = 0x3ecccccd;
      iVar2 = FUN_004c8987();
    }
  }
  else {
    iVar2 = FUN_004c895d();
  }
  if (iVar2 != in_ECX[0x40]) {
    FUN_004c107a(in_ECX[0x40]);
    in_ECX[0x40] = iVar2;
    if (iVar2 != 0) {
      FUN_004c0e0e(0);
      FUN_004c1064(0xffffffff);
      (**(code **)(*in_ECX + 0x84))();
    }
  }
  if (in_ECX[0x40] != 0) {
    FUN_004c15a5(local_c);
  }
  return;
}

