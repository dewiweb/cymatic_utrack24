// rea decompile_all
// name: FUN_0049c48b
// address: 0x49c48b
// body: available
// range: 0x49c48b-0x49c5c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049c48b(void)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  
  *(undefined1 *)(unaff_ESI + 0x113) = *(undefined1 *)(unaff_ESI + 0x10e);
  *(char *)(unaff_ESI + 0x112) = *(char *)(unaff_ESI + 0x110) * *(char *)(unaff_ESI + 0x10d);
  puVar2 = (undefined1 *)FUN_0049174b();
  bVar1 = *(byte *)(unaff_ESI + 0x10a);
  *(undefined1 **)(unaff_ESI + 0xd8) = puVar2;
  *puVar2 = 0;
  if ((bVar1 & 0x10) != 0) {
    puVar2 = (undefined1 *)FUN_0049174b();
    *(undefined1 **)(unaff_ESI + 0xdc) = puVar2;
    *puVar2 = 1;
  }
  if ((*(byte *)(unaff_ESI + 0x10a) & 0xe0) != 0) {
    uVar3 = FUN_00491655();
    *(undefined4 *)(unaff_ESI + 0xd4) = uVar3;
    if ((*(byte *)(unaff_ESI + 0x10a) & 0x20) != 0) {
      puVar2 = (undefined1 *)FUN_0049174b();
      *(undefined1 **)(unaff_ESI + 0xe0) = puVar2;
      *puVar2 = 2;
    }
    if ((*(byte *)(unaff_ESI + 0x10a) & 0x40) != 0) {
      puVar2 = (undefined1 *)FUN_0049174b();
      *(undefined1 **)(unaff_ESI + 0xe4) = puVar2;
      *puVar2 = 3;
    }
    if ((*(byte *)(unaff_ESI + 0x10a) & 0x80) != 0) {
      puVar2 = (undefined1 *)FUN_0049174b();
      *(undefined1 **)(unaff_ESI + 0xe8) = puVar2;
      *puVar2 = 4;
    }
  }
  if ((*(char *)(unaff_ESI + 0x108) == '\0') || ((*(byte *)(unaff_ESI + 0x30) & 2) != 0)) {
    *(int *)(unaff_ESI + 0xbc) = *(int *)(unaff_ESI + 0xb8);
    uVar4 = *(uint *)(unaff_ESI + 0xb4);
  }
  else {
    *(uint *)(unaff_ESI + 0xbc) = *(int *)(unaff_ESI + 0xb8) + 7U >> 3;
    uVar4 = *(int *)(unaff_ESI + 0xb4) + 7U >> 3;
  }
  *(uint *)(unaff_ESI + 0xc0) = uVar4;
  return;
}

