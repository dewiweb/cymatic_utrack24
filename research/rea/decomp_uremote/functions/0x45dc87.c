// rea decompile_all
// name: FUN_0045dc87
// address: 0x45dc87
// body: available
// range: 0x45dc87-0x45dd31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045dc87(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 uVar5;
  
  cVar1 = FUN_0045f278(unaff_EDI);
  if (cVar1 != '\0') {
    if (*(int *)(unaff_EDI + 1000) == 0) {
      if (*(int *)(unaff_EDI + 0x114) != 0) {
        if (0 < param_1) {
          param_1 = 0;
        }
        if (param_1 < -0x1e) {
          param_1 = -0x1e;
        }
        iVar4 = **(int **)(unaff_EDI + 0x114);
        uVar5 = 0;
        uVar2 = FUN_00504050(((param_1 + 0x1e) * 0xffff) / 0x1e,0);
        iVar3 = (**(code **)(iVar4 + 0x15c))(0xb201,0,uVar2,uVar5);
        iVar4 = iVar3;
        if (iVar3 != 0) {
          iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0xc) + 4 + iVar3;
        }
        (**(code **)(**(int **)(unaff_EDI + 300) + 0x6c))(iVar4);
        (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 8) + 4 + iVar3) + 4))();
      }
    }
    else {
      FUN_0044702c();
    }
  }
  return;
}

