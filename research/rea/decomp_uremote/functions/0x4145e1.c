// rea decompile_all
// name: FUN_004145e1
// address: 0x4145e1
// body: available
// range: 0x4145e1-0x414636 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004145e1(int param_1,int param_2,int *param_3)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int unaff_EDI;
  
  if (unaff_EDI - 1U < 0xffff) {
    uVar1 = thunk_FUN_00401000();
    iVar2 = thunk_FUN_00401000(param_1 + in_EAX * -2 + param_2,uVar1);
    iVar3 = thunk_FUN_00401000(in_EAX - param_1,unaff_EDI * 2);
    iVar3 = iVar3 + iVar2 + param_1;
    if (iVar3 < *unaff_EBX) {
      *unaff_EBX = iVar3;
    }
    if (*param_3 < iVar3) {
      *param_3 = iVar3;
    }
  }
  return;
}

