// rea decompile_all
// name: FUN_0052ef30
// address: 0x52ef30
// body: available
// range: 0x52ef30-0x52efb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052ef30(void)

{
  int iVar1;
  char cVar2;
  ushort *in_ECX;
  
  if ((*in_ECX < *(ushort *)(*(int *)(in_ECX + 2) + 0x4e)) && (*(int *)(in_ECX + 10) != 0)) {
    iVar1 = *(int *)(in_ECX + 10);
    cVar2 = FUN_0057b120(*(undefined4 *)(in_ECX + 10),*(undefined4 *)(in_ECX + 0xc));
    if (cVar2 == '\0') {
      in_ECX[10] = 0;
      in_ECX[0xb] = 0;
      in_ECX[0xc] = 0;
      in_ECX[0xd] = 0;
    }
    else {
      *(uint *)(in_ECX + 10) = (uint)in_ECX[8] + iVar1;
    }
  }
  return;
}

