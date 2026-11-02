// rea decompile_all
// name: FUN_00409f48
// address: 0x409f48
// body: available
// range: 0x409f48-0x40a099 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409f48(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  void *unaff_ESI;
  int unaff_EDI;
  
  _memset(unaff_ESI,0,0xc4);
  uVar3 = (uint)*(byte *)(unaff_EDI + 0xb0);
  *(byte *)((int)unaff_ESI + 8) = *(byte *)(unaff_EDI + 0xb0);
  if (uVar3 != 0) {
    puVar1 = (undefined2 *)((int)unaff_ESI + 0xc);
    puVar2 = (undefined2 *)(unaff_EDI + 0xb4);
    do {
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = (uint)*(byte *)(unaff_EDI + 0xb1);
  *(byte *)((int)unaff_ESI + 9) = *(byte *)(unaff_EDI + 0xb1);
  if (uVar3 != 0) {
    puVar1 = (undefined2 *)((int)unaff_ESI + 0x28);
    puVar2 = (undefined2 *)(unaff_EDI + 0xec);
    do {
      *puVar1 = *puVar2;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = (uint)*(byte *)(unaff_EDI + 0xb2);
  *(byte *)((int)unaff_ESI + 10) = *(byte *)(unaff_EDI + 0xb2);
  if (uVar3 != 0) {
    puVar1 = (undefined2 *)((int)unaff_ESI + 0x3c);
    puVar2 = (undefined2 *)(unaff_EDI + 0x114);
    do {
      *puVar1 = *puVar2;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = (uint)*(byte *)(unaff_EDI + 0xb3);
  *(byte *)((int)unaff_ESI + 0xb) = *(byte *)(unaff_EDI + 0xb3);
  if (uVar3 != 0) {
    puVar1 = (undefined2 *)((int)unaff_ESI + 0x58);
    puVar2 = (undefined2 *)(unaff_EDI + 0x14c);
    do {
      *puVar1 = *puVar2;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(undefined4 *)((int)unaff_ESI + 0x6c) = *(undefined4 *)(unaff_EDI + 0x174);
  *(undefined4 *)((int)unaff_ESI + 0x70) = *(undefined4 *)(unaff_EDI + 0x178);
  *(undefined4 *)((int)unaff_ESI + 0x74) = *(undefined4 *)(unaff_EDI + 0x17c);
  *(undefined2 *)((int)unaff_ESI + 0x78) = *(undefined2 *)(unaff_EDI + 0x180);
  *(undefined2 *)((int)unaff_ESI + 0x7a) = *(undefined2 *)(unaff_EDI + 0x184);
  uVar3 = (uint)*(byte *)(unaff_EDI + 0x188);
  *(byte *)((int)unaff_ESI + 0x7c) = *(byte *)(unaff_EDI + 0x188);
  if (uVar3 != 0) {
    puVar1 = (undefined2 *)((int)unaff_ESI + 0x80);
    puVar2 = (undefined2 *)(unaff_EDI + 0x18c);
    do {
      *puVar1 = *puVar2;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = (uint)*(byte *)(unaff_EDI + 0x189);
  *(byte *)((int)unaff_ESI + 0x7d) = *(byte *)(unaff_EDI + 0x189);
  if (uVar3 != 0) {
    puVar1 = (undefined2 *)((int)unaff_ESI + 0x9a);
    puVar2 = (undefined2 *)(unaff_EDI + 0x1c0);
    do {
      *puVar1 = *puVar2;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(undefined1 *)((int)unaff_ESI + 0x7e) = *(undefined1 *)(unaff_EDI + 500);
  *(undefined4 *)((int)unaff_ESI + 0xb8) = *(undefined4 *)(unaff_EDI + 0x200);
  *(undefined4 *)((int)unaff_ESI + 4) = *(undefined4 *)(unaff_EDI + 0x1fc);
  return;
}

