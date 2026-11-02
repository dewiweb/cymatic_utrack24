// rea decompile_all
// name: FUN_0042e52b
// address: 0x42e52b
// body: available
// range: 0x42e52b-0x42e59e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042e52b(void *param_1,size_t param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined1 local_c [4];
  short local_8 [2];
  
  iVar1 = FUN_0041106d();
  if ((iVar1 == 0) && (iVar1 = FUN_0042e4d2(local_8,local_c), iVar1 == 0)) {
    if ((local_8[0] != -0x7fff) && (iVar1 = FUN_0041106d(), iVar1 != 0)) {
      return iVar1;
    }
    iVar1 = FUN_004111b5();
    if (iVar1 == 0) {
      iVar2 = _memcmp(*(void **)(in_EAX + 0x20),param_1,param_2);
      if (iVar2 != 0) {
        iVar1 = 2;
      }
      FUN_00411249();
    }
  }
  return iVar1;
}

