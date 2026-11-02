// rea decompile_all
// name: FUN_004fde32
// address: 0x4fde32
// body: available
// range: 0x4fde32-0x4fdec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fde32(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  undefined1 auStack_18 [20];
  
  if (in_ECX[1] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(in_ECX[1] + 8);
  }
  iVar2 = *(int *)(iVar3 + 0x40);
  cVar1 = FUN_004fdf15();
  if ((iVar2 != 0) != (bool)cVar1) {
    (**(code **)(*in_ECX + 0x28))();
  }
  if (((0 < *(int *)(iVar3 + 0x18)) && (0 < *(int *)(iVar3 + 0x1c))) &&
     (*(int *)(in_ECX[0x10] + 0xc0) != 0)) {
    iVar2 = FUN_004fdda3();
    if (iVar2 != 0) {
      FUN_004fd958(iVar2,1);
    }
    thunk_FUN_004c1265();
    iVar2 = FUN_004c0453();
    if (iVar2 != 0) {
      FUN_004eddd8(auStack_18,iVar3);
      FUN_004fd1ff();
    }
  }
  return;
}

