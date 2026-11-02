// rea decompile_all
// name: FUN_00436454
// address: 0x436454
// body: available
// range: 0x436454-0x436536 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00436454(int param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_c;
  undefined4 local_8;
  
  pvVar1 = *(void **)(unaff_ESI + 0x30);
  local_c = *(void **)(unaff_EDI + 0xc);
  pvVar4 = *(void **)(unaff_ESI + 0x34);
  if (pvVar4 < pvVar1) {
    pvVar4 = *(void **)(unaff_ESI + 0x2c);
  }
  uVar2 = *(uint *)(unaff_EDI + 0x10);
  uVar5 = (int)pvVar4 - (int)pvVar1;
  if (uVar2 < (uint)((int)pvVar4 - (int)pvVar1)) {
    uVar5 = uVar2;
  }
  if ((uVar5 != 0) && (param_1 == -5)) {
    param_1 = 0;
  }
  *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + uVar5;
  *(uint *)(unaff_EDI + 0x10) = uVar2 - uVar5;
  if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
    uVar3 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),pvVar1,uVar5);
    *(undefined4 *)(unaff_ESI + 0x3c) = uVar3;
    *(undefined4 *)(unaff_EDI + 0x30) = uVar3;
  }
  _memcpy(local_c,pvVar1,uVar5);
  local_8 = (int)pvVar1 + uVar5;
  local_c = (void *)((int)local_c + uVar5);
  if (local_8 == *(int *)(unaff_ESI + 0x2c)) {
    pvVar1 = *(void **)(unaff_ESI + 0x28);
    if (*(int *)(unaff_ESI + 0x34) == *(int *)(unaff_ESI + 0x2c)) {
      *(void **)(unaff_ESI + 0x34) = pvVar1;
    }
    uVar2 = *(uint *)(unaff_EDI + 0x10);
    uVar5 = *(int *)(unaff_ESI + 0x34) - (int)pvVar1;
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    if ((uVar5 != 0) && (param_1 == -5)) {
      param_1 = 0;
    }
    *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + uVar5;
    *(uint *)(unaff_EDI + 0x10) = uVar2 - uVar5;
    if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
      uVar3 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),pvVar1,uVar5);
      *(undefined4 *)(unaff_ESI + 0x3c) = uVar3;
      *(undefined4 *)(unaff_EDI + 0x30) = uVar3;
    }
    _memcpy(local_c,pvVar1,uVar5);
    local_c = (void *)((int)local_c + uVar5);
    local_8 = (int)pvVar1 + uVar5;
  }
  *(void **)(unaff_EDI + 0xc) = local_c;
  *(int *)(unaff_ESI + 0x30) = local_8;
  return param_1;
}

