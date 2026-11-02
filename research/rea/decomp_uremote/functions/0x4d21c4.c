// rea decompile_all
// name: FUN_004d21c4
// address: 0x4d21c4
// body: available
// range: 0x4d21c4-0x4d2275 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d21c4(int param_1)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = in_EAX[0x1e];
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 8);
  }
  if (iVar2 != param_1) {
    FUN_004d216a();
    FUN_004f77e9();
    FUN_004a4d78();
    *(undefined1 *)((int)in_EAX + 0x9a) = 1;
    cVar1 = FUN_004f5fe9(0);
    if (cVar1 != '\0') {
      FUN_004c1064(0xffffffff);
      FUN_004d2329(0,0);
      FUN_004c2108();
    }
    iVar2 = in_EAX[0x1e];
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 8);
    }
    (**(code **)(*in_EAX + 0xb4))(uVar3);
    FUN_004d23a9();
  }
  return;
}

