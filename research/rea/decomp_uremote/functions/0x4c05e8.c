// rea decompile_all
// name: FUN_004c05e8
// address: 0x4c05e8
// body: available
// range: 0x4c05e8-0x4c0688 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c05e8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  
  if ((param_1 != 0) && (param_1 != in_ECX)) {
    iVar5 = *(int *)(in_ECX + 0xc);
    if (iVar5 == 0) {
      cVar1 = FUN_004c044d();
      if (cVar1 != '\0') {
        cVar1 = FUN_004c044d();
        if (cVar1 != '\0') {
          piVar4 = (int *)FUN_004c0453();
          iVar5 = FUN_004c0453();
          if ((piVar4 != (int *)0x0) && (iVar5 != 0)) {
            (**(code **)(*piVar4 + 0x5c))(iVar5);
          }
        }
      }
    }
    else {
      iVar2 = FUN_00472d86(in_ECX);
      if (-1 < iVar2) {
        if (iVar2 + 1U < *(uint *)(iVar5 + 0x30)) {
          iVar3 = *(int *)(*(int *)(iVar5 + 0x28) + (iVar2 + 1U) * 4);
        }
        else {
          iVar3 = 0;
        }
        if (iVar3 != param_1) {
          iVar3 = FUN_00472d86(param_1);
          if (-1 < iVar3) {
            if (iVar2 < iVar3) {
              iVar3 = iVar3 + -1;
            }
            FUN_004c04f6(iVar5,iVar3);
          }
        }
      }
    }
  }
  return;
}

