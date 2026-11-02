// rea decompile_all
// name: FUN_0048e3fa
// address: 0x48e3fa
// body: available
// range: 0x48e3fa-0x48e485 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e3fa(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(in_EAX + 0x1a8);
  iVar1 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  piVar2 = (int *)(iVar1 + 0x3fc);
  *(int **)(iVar4 + 0x28) = piVar2;
  iVar4 = 0;
  uVar3 = 0;
  iVar1 = 0;
  piVar5 = piVar2;
  do {
    piVar2[uVar3] = iVar4;
    *piVar5 = iVar1;
    uVar3 = uVar3 + 1;
    piVar5 = piVar5 + -1;
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + -1;
  } while ((int)uVar3 < 0x10);
  if ((int)uVar3 < 0x30) {
    piVar5 = piVar2 + -uVar3;
    do {
      piVar2[uVar3] = iVar4;
      *piVar5 = -iVar4;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + -1;
      iVar4 = iVar4 + (~uVar3 & 1);
    } while ((int)uVar3 < 0x30);
  }
  if ((int)uVar3 < 0x100) {
    piVar5 = piVar2 + -uVar3;
    do {
      piVar2[uVar3] = iVar4;
      *piVar5 = -iVar4;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + -1;
    } while ((int)uVar3 < 0x100);
  }
  return;
}

