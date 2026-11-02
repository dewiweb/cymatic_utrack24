// rea decompile_all
// name: FUN_0045b29e
// address: 0x45b29e
// body: available
// range: 0x45b29e-0x45b2fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045b29e(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int unaff_EBX;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_10 [12];
  
  iVar3 = 0;
  if (0 < *(int *)(unaff_EBX + 0x58)) {
    do {
      piVar2 = (int *)FUN_0045b3d0();
      uVar4 = param_1;
      (**(code **)(*piVar2 + 8))(local_10,param_1);
      cVar1 = FUN_005034a0(uVar4);
      if (cVar1 != '\0') {
        iVar3 = FUN_0045b3d0();
        (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 8) + 4 + iVar3) + 4))();
        FUN_0045b451();
        *(undefined1 *)(unaff_EBX + 100) = 1;
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_EBX + 0x58));
  }
  return;
}

