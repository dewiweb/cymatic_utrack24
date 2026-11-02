// rea decompile_all
// name: FUN_004e7344
// address: 0x4e7344
// body: available
// range: 0x4e7344-0x4e740b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7344(undefined4 param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  uint unaff_EBX;
  uint uVar4;
  
  if (*(char *)(in_EAX + 0x9c) == '\0') {
    param_2 = '\x01';
  }
  cVar1 = FUN_004e766a(unaff_EBX);
  if (cVar1 != '\0') {
    if (param_2 == '\0') {
      return;
    }
    iVar2 = FUN_004e7635();
    if (iVar2 < 2) {
      return;
    }
  }
  if (unaff_EBX < *(uint *)(in_EAX + 0x88)) {
    if (param_2 != '\0') {
      FUN_0043f3c8();
    }
    uVar4 = unaff_EBX;
    uVar3 = FUN_00439b5a();
    FUN_004a665f(uVar4,uVar3);
    if ((*(int *)(in_EAX + 0x1c) == 0) || (*(int *)(in_EAX + 0x18) == 0)) {
      param_1 = 1;
    }
    FUN_004e6e2d(*(undefined4 *)(in_EAX + 0x8c),param_1,*(uint *)(in_EAX + 0x98),param_3);
    *(uint *)(in_EAX + 0x98) = unaff_EBX;
    (**(code **)(**(int **)(in_EAX + 0x78) + 0x1c))();
  }
  else if (param_2 != '\0') {
    FUN_004e7568();
  }
  return;
}

