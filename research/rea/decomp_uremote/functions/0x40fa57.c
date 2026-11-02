// rea decompile_all
// name: FUN_0040fa57
// address: 0x40fa57
// body: available
// range: 0x40fa57-0x40fad2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040fa57(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  undefined4 local_8;
  
  local_8 = 6;
  if (unaff_EDI != (undefined1 *)0x0) {
    *unaff_EDI = 0;
  }
  if ((((unaff_ESI != 0) && (unaff_EBX <= *(int *)(unaff_ESI + 0x10))) &&
      ((*(uint *)(unaff_ESI + 8) & 0x200) != 0)) &&
     (puVar2 = *(undefined4 **)(*(int *)(unaff_ESI + 0x80) + 0x28),
     puVar2 != (undefined4 *)0xfffffffe)) {
    if (puVar2 == (undefined4 *)0x0) {
      pcVar1 = *(code **)(**(int **)(unaff_ESI + 0x60) + 0x20);
      if (pcVar1 != (code *)0x0) {
        puVar2 = (undefined4 *)(*pcVar1)(*(int **)(unaff_ESI + 0x60),"glyph-dict");
      }
      puVar3 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0xfffffffe;
      }
      *(undefined4 **)(*(int *)(unaff_ESI + 0x80) + 0x28) = puVar3;
      if (puVar2 == (undefined4 *)0x0) {
        return 6;
      }
    }
    if ((code *)*puVar2 != (code *)0x0) {
      local_8 = (*(code *)*puVar2)();
    }
  }
  return local_8;
}

