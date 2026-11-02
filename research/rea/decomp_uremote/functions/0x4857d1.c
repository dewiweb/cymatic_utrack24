// rea decompile_all
// name: FUN_004857d1
// address: 0x4857d1
// body: available
// range: 0x4857d1-0x4858b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004857d1(char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  int local_8;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(unaff_EDI + 4))();
  *(undefined4 **)(unaff_EDI + 0x188) = puVar1;
  *puVar1 = &LAB_00484c8b;
  puVar1[2] = FUN_00484c9b;
  puVar1[0x1c] = 0;
  if (param_1 == '\0') {
    iVar4 = (**(code **)(*(int *)(unaff_EDI + 4) + 4))();
    piVar5 = puVar1 + 8;
    iVar2 = 10;
    do {
      *piVar5 = iVar4;
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + 0x80;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1[1] = FUN_0040d13e;
    puVar1[3] = FUN_00484cd6;
    puVar1[4] = 0;
  }
  else {
    local_8 = 0;
    if (0 < *(int *)(unaff_EDI + 0x24)) {
      piVar5 = (int *)(*(int *)(unaff_EDI + 0xc4) + 0xc);
      _param_1 = puVar1 + 0x12;
      do {
        iVar2 = *piVar5;
        if (*(char *)(unaff_EDI + 200) != '\0') {
          iVar2 = iVar2 * 3;
        }
        uVar3 = FUN_0048e6c7(iVar2);
        FUN_0048e6c7(uVar3);
        uVar3 = (**(code **)(*(int *)(unaff_EDI + 4) + 0x14))();
        local_8 = local_8 + 1;
        *_param_1 = uVar3;
        piVar5 = piVar5 + 0x15;
        _param_1 = _param_1 + 1;
      } while (local_8 < *(int *)(unaff_EDI + 0x24));
    }
    puVar1[1] = FUN_00484eb0;
    puVar1[3] = FUN_0048504c;
    puVar1[4] = puVar1 + 0x12;
  }
  return;
}

