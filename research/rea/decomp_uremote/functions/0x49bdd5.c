// rea decompile_all
// name: FUN_0049bdd5
// address: 0x49bdd5
// body: available
// range: 0x49bdd5-0x49be31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049bdd5(void)

{
  int in_EAX;
  undefined4 uVar1;
  int unaff_EBX;
  int iVar2;
  
  if ((int)(uint)*(ushort *)(in_EAX + 0xfc) < unaff_EBX) {
    FUN_00491216();
  }
  else {
    FUN_0049ad1f();
    iVar2 = 0;
    if (0 < unaff_EBX) {
      do {
        uVar1 = FUN_0049aca3();
        FUN_0049ad91(uVar1,2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < unaff_EBX);
    }
    FUN_0049adc5();
  }
  return;
}

