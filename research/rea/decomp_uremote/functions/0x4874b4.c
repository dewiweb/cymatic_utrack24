// rea decompile_all
// name: FUN_004874b4
// address: 0x4874b4
// body: available
// range: 0x4874b4-0x48754e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004874b4(void)

{
  undefined1 *puVar1;
  int iVar2;
  int *unaff_ESI;
  
  *(undefined4 *)(*unaff_ESI + 0x14) = 0x66;
  (**(code **)(*unaff_ESI + 4))();
  if (*(char *)(unaff_ESI[0x65] + 0xc) != '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x3d;
    (**(code **)*unaff_ESI)();
  }
  puVar1 = (undefined1 *)((int)unaff_ESI + 0xda);
  iVar2 = 0x10;
  do {
    puVar1[-0x10] = 0;
    *puVar1 = 1;
    puVar1[0x10] = 5;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)(unaff_ESI + 0x41) = 1;
  *(undefined2 *)((int)unaff_ESI + 0x106) = 1;
  iVar2 = unaff_ESI[0x65];
  unaff_ESI[0x3f] = 0;
  unaff_ESI[10] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x10a) = 0;
  *(undefined1 *)(unaff_ESI + 0x40) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x103) = 0;
  *(undefined1 *)(unaff_ESI + 0x42) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x109) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x101) = 1;
  *(undefined1 *)((int)unaff_ESI + 0x102) = 1;
  *(undefined1 *)(iVar2 + 0xc) = 1;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

