// rea decompile_all
// name: FUN_00445431
// address: 0x445431
// body: available
// range: 0x445431-0x445528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445431(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_20 [6];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  iVar6 = *(int *)(in_ECX + 0x70);
  FUN_0045ef8e();
  cVar2 = FUN_0045f738();
  if (cVar2 == '\0') {
    cVar2 = FUN_0045f751();
    if (cVar2 == '\0') {
      iVar6 = *(int *)(iVar6 + 0x2c8);
      iVar4 = 0;
      do {
        *(bool *)((int)local_20 + iVar4) = iVar4 < iVar6;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x18);
    }
    else {
      puVar7 = local_20;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0x1010101;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else {
    uVar1 = *(uint *)(iVar6 + 0x24c);
    puVar7 = local_20;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    uVar5 = 0;
    if (0 < (int)uVar1) {
      do {
        if (uVar5 < uVar1) {
          uVar3 = *(uint *)(*(int *)(iVar6 + 0x244) + uVar5 * 4);
        }
        else {
          uVar3 = 0;
        }
        if (uVar3 < 0x18) {
          *(undefined1 *)((int)local_20 + uVar3) = 1;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  iVar6 = 0;
  if (0 < *(int *)(in_ECX + 0x84)) {
    do {
      FUN_004c3170(*(undefined1 *)((int)local_20 + iVar6));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x84));
  }
  FUN_0045efa9();
  uVar8 = *(undefined4 *)(in_ECX + 0x1c);
  FUN_005b3fb0(uVar8);
  FUN_004c0be5(uVar8);
  FUN_004c1613(in_ECX);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

