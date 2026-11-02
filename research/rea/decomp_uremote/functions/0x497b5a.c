// rea decompile_all
// name: FUN_00497b5a
// address: 0x497b5a
// body: available
// range: 0x497b5a-0x497c31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00497b5a(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_ESI;
  uint unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x250) != 0) {
    FUN_00491789();
    *(undefined4 *)(unaff_ESI + 0x250) = 0;
  }
  uVar1 = *(uint *)(unaff_ESI + 0x244);
  uVar3 = 0xffffffff;
  if ((uVar1 != 0) && (uVar1 != 0xffffffff)) {
    uVar3 = uVar1;
  }
  if (unaff_EDI <= uVar3) {
    uVar2 = *(undefined4 *)(unaff_ESI + 0xd0);
    *(char *)(unaff_ESI + 0x248) = (char)((uint)uVar2 >> 0x18);
    *(char *)(unaff_ESI + 0x24a) = (char)((uint)uVar2 >> 8);
    *(undefined1 *)(unaff_ESI + 0x24b) = *(undefined1 *)(unaff_ESI + 0xd0);
    *(char *)(unaff_ESI + 0x249) = (char)((uint)uVar2 >> 0x10);
    *(undefined1 *)(unaff_ESI + 0x24c) = 0;
    *(uint *)(unaff_ESI + 0x254) = unaff_EDI;
    *(undefined1 *)(unaff_ESI + 600) = *(undefined1 *)(unaff_ESI + 0x28);
    if (unaff_EDI == 0) {
      *(undefined4 *)(unaff_ESI + 0x250) = 0;
    }
    else {
      uVar2 = FUN_0049176b();
      *(undefined4 *)(unaff_ESI + 0x250) = uVar2;
    }
  }
  if (*(int *)(unaff_ESI + 0x250) == 0) {
    if (unaff_EDI != 0) {
      FUN_00495a5d();
      FUN_004914ad();
      return 0;
    }
  }
  else if (unaff_EDI != 0) {
    FUN_00495a35(*(int *)(unaff_ESI + 0x250));
  }
  FUN_00495a5d();
  return 1;
}

