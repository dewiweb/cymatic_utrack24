// rea decompile_all
// name: FUN_004e6e2d
// address: 0x4e6e2d
// body: available
// range: 0x4e6e2d-0x4e6ed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e6e2d(int param_1,char param_2,int param_3,char param_4)

{
  int in_EAX;
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int in_EDX;
  
  *(undefined1 *)(in_EDX + 0x32c) = 0;
  if ((in_ECX < *(int *)(in_EDX + 0x324)) && (param_2 == '\0')) {
    param_1 = in_ECX * param_1;
  }
  else {
    if ((in_ECX < *(int *)(in_EDX + 0x328)) || (param_2 != '\0')) goto LAB_004e6ebc;
    iVar2 = *(int *)(in_EDX + 0x328) - *(int *)(in_EDX + 0x324);
    if (((in_ECX < param_3 + iVar2) || (in_EAX + -1 <= iVar2)) || (param_4 != '\0')) {
      FUN_004d227d();
      param_1 = FUN_00439b5a(0);
    }
    else {
      uVar1 = FUN_00439b5a(0);
      iVar2 = FUN_00470645(0,uVar1);
      param_1 = iVar2 * param_1;
    }
  }
  FUN_004d2314(param_1);
LAB_004e6ebc:
  if (*(char *)(in_EDX + 0x32c) == '\0') {
    FUN_004e6c12();
  }
  return;
}

