// rea decompile_all
// name: FUN_004d0d85
// address: 0x4d0d85
// body: available
// range: 0x4d0d85-0x4d0e42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0d85(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *extraout_ECX;
  undefined4 uVar6;
  undefined1 local_18 [20];
  
  cVar2 = FUN_004f5fce(0);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(in_ECX + 0x80);
    iVar4 = *(int *)(in_ECX + 0x84);
    iVar3 = FUN_004c6e00();
    iVar3 = iVar3 + iVar4;
    iVar4 = FUN_004c6df1(iVar3);
    FUN_004f5aef(iVar4 + iVar1,iVar3);
    if (*(int *)(in_ECX + 0x74) == 0) {
      piVar5 = (int *)FUN_004c202e();
      if (piVar5 == extraout_ECX) {
        FUN_004c0c1f();
      }
      else {
        (**(code **)(*piVar5 + 4))(local_18);
      }
    }
    else {
      if (*(int *)(in_ECX + 0x70) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(in_ECX + 0x70) + 8);
      }
      FUN_004cf90b(*(undefined4 *)(in_ECX + 0x74),uVar6,0,0,1,1);
    }
  }
  return;
}

