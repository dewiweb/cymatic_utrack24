// rea decompile_all
// name: FUN_00420962
// address: 0x420962
// body: available
// range: 0x420962-0x4209c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00420962(void)

{
  undefined1 *puVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint in_EDX;
  bool bVar4;
  
  iVar2 = 0;
  if (in_EDX < 0x10000) {
    iVar2 = in_EAX + 0x206;
    if (in_EDX >> 8 == 0) {
      puVar1 = (undefined1 *)(in_EAX + 6 + (in_EDX & 0xff) * 2);
      if (CONCAT11(*puVar1,puVar1[1]) != 0) {
        return 0;
      }
    }
    else {
      puVar1 = (undefined1 *)(in_EAX + 6 + (in_EDX >> 8) * 2);
      iVar3 = (CONCAT11(*puVar1,puVar1[1]) & 0xfffffff8) + iVar2;
      bVar4 = iVar3 == iVar2;
      iVar2 = iVar3;
      if (bVar4) {
        return 0;
      }
    }
  }
  return iVar2;
}

