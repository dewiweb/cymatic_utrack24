// rea decompile_all
// name: FUN_004686da
// address: 0x4686da
// body: available
// range: 0x4686da-0x46875e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004686da(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  if ((((unaff_EDI == 0) || (iVar1 = *(int *)(unaff_EDI + 0x1c), iVar1 == 0)) ||
      (*(int *)(unaff_EDI + 0x20) == 0)) || (*(int *)(unaff_EDI + 0x24) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(unaff_EDI + 0x14) = 0;
    *(undefined4 *)(unaff_EDI + 8) = 0;
    *(undefined4 *)(unaff_EDI + 0x18) = 0;
    *(undefined4 *)(unaff_EDI + 0x2c) = 2;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if (*(int *)(iVar1 + 0x18) < 0) {
      *(int *)(iVar1 + 0x18) = -*(int *)(iVar1 + 0x18);
    }
    *(uint *)(iVar1 + 4) = (-(uint)(*(int *)(iVar1 + 0x18) != 0) & 0xffffffb9) + 0x71;
    if (*(int *)(iVar1 + 0x18) == 2) {
      uVar2 = FUN_00468297(0);
    }
    else {
      uVar2 = FUN_0046807d(0);
    }
    *(undefined4 *)(unaff_EDI + 0x30) = uVar2;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    FUN_0046b7c4();
    FUN_00469038();
    uVar2 = 0;
  }
  return uVar2;
}

