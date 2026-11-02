// rea decompile_all
// name: FUN_004d1987
// address: 0x4d1987
// body: available
// range: 0x4d1987-0x4d1a29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d1987(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  *(undefined1 *)(in_ECX + 0xe5) = 0;
  if (*(char *)(in_ECX + 0xe4) == '\0') {
    iVar2 = *(int *)(param_1 + 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  *(undefined8 *)(in_ECX + 0xb8) = *(undefined8 *)(in_ECX + 0xa0);
  *(int *)(in_ECX + 0xd4) = iVar2;
  *(int *)(in_ECX + 0xd0) = iVar2;
  if (iVar2 < *(int *)(in_ECX + 200)) {
    uVar5 = 0xffffffff;
  }
  else {
    if (iVar2 < *(int *)(in_ECX + 0xcc) + *(int *)(in_ECX + 200)) {
      piVar3 = (int *)thunk_FUN_004c1d58();
      iVar2 = *(int *)(in_ECX + 0xc4);
      iVar4 = (**(code **)(*piVar3 + 0x14))();
      if ((iVar4 < iVar2) && (*(int *)(in_ECX + 0xcc) < iVar2)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(in_ECX + 0xe5) = uVar1;
      return;
    }
    uVar5 = 1;
  }
  FUN_004d1300(uVar5);
  FUN_0047479c();
  return;
}

