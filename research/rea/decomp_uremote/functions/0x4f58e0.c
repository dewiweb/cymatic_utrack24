// rea decompile_all
// name: FUN_004f58e0
// address: 0x4f58e0
// body: available
// range: 0x4f58e0-0x4f5965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HGLOBAL FUN_004f58e0(void)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  undefined4 in_ECX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  iVar3 = *(int *)(unaff_EBX + 8);
  iVar4 = 0;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    uVar5 = FUN_00467165(in_ECX);
    *(undefined4 *)((ulonglong)uVar5 >> 0x20) = *(undefined4 *)uVar5;
    iVar1 = FUN_00470fe0();
    iVar4 = iVar4 + 2 + iVar1;
  }
  hMem = GlobalAlloc(0x42,iVar4 + 0x18);
  if (hMem != (HGLOBAL)0x0) {
    puVar2 = GlobalLock(hMem);
    iVar4 = 0;
    *puVar2 = 0x14;
    puVar2[4] = 1;
    puVar2 = puVar2 + 5;
    if (0 < *(int *)(unaff_EBX + 8)) {
      do {
        uVar6 = 0x800;
        FUN_00467165(0x800);
        iVar3 = FUN_00466bc9(uVar6);
        puVar2 = (undefined4 *)((int)puVar2 + iVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(unaff_EBX + 8));
    }
    *(undefined2 *)puVar2 = 0;
    GlobalUnlock(hMem);
  }
  return hMem;
}

