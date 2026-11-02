// rea decompile_all
// name: FUN_004a6802
// address: 0x4a6802
// body: available
// range: 0x4a6802-0x4a6890 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004a682c) */

void FUN_004a6802(void)

{
  int iVar1;
  int *in_EAX;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  
  if (in_EAX[1] < in_EAX[2] + 10) {
    FUN_0046ebd7();
  }
  iVar3 = in_EAX[2] * 0x10 + *in_EAX;
  in_EAX[2] = in_EAX[2] + 10;
  iVar2 = 9;
  do {
    if (iVar3 != 0) {
      FUN_004652e4(unaff_EBX);
      FUN_004652e4(unaff_EBX + 4);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(unaff_EBX + 8);
      iVar1 = *(int *)(unaff_EBX + 0xc);
      *(int *)(iVar3 + 0xc) = iVar1;
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
      }
    }
    iVar3 = iVar3 + 0x10;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}

