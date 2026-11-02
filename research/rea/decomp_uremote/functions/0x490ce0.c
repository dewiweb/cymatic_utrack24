// rea decompile_all
// name: FUN_00490ce0
// address: 0x490ce0
// body: available
// range: 0x490ce0-0x490df6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490ce0(undefined4 param_1,int *param_2,byte param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined2 local_14;
  undefined4 local_8;
  
  piVar1 = param_2;
  bVar6 = 8 - param_3;
  uVar8 = 1 << (bVar6 & 0x1f);
  iVar2 = FUN_00491655(param_1,uVar8 << 2);
  param_2 = (int *)0x0;
  *piVar1 = iVar2;
  if (uVar8 != 0) {
    do {
      uVar3 = FUN_0049174b(param_1,0x200);
      uVar4 = (int)param_2 + 1;
      *(undefined4 *)(iVar2 + (int)param_2 * 4) = uVar3;
      param_2 = (int *)uVar4;
    } while (uVar4 < uVar8);
  }
  local_8 = 0;
  param_2 = (int *)0x0;
  do {
    local_14 = (short)param_2 * 0x101;
    uVar4 = FUN_00490b14(param_4);
    uVar4 = ((uVar4 & 0xffff) * ((1 << (0x10 - param_3 & 0x1f)) + -1) + 0x8000) / 0xffff + 1;
    if (local_8 < uVar4) {
      do {
        uVar5 = 0xffU >> (param_3 & 0x1f) & local_8;
        uVar7 = local_8 >> (bVar6 & 0x1f);
        local_8 = local_8 + 1;
        *(short *)(*(int *)(iVar2 + uVar5 * 4) + uVar7 * 2) = local_14;
      } while (local_8 < uVar4);
    }
    param_2 = (int *)((int)param_2 + 1);
  } while (param_2 < 0xff);
  if (local_8 < uVar8 << 8) {
    do {
      uVar5 = local_8 >> (bVar6 & 0x1f);
      uVar4 = 0xff >> (param_3 & 0x1f) & local_8;
      local_8 = local_8 + 1;
      *(undefined2 *)(*(int *)(iVar2 + uVar4 * 4) + uVar5 * 2) = 0xffff;
    } while (local_8 < uVar8 << 8);
  }
  return;
}

