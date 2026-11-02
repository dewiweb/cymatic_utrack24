// rea decompile_all
// name: FUN_0041b9ec
// address: 0x41b9ec
// body: available
// range: 0x41b9ec-0x41ba9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041b9ec(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint *unaff_EDI;
  int local_c;
  int *local_8;
  
  uVar3 = 0;
  local_c = 0;
  if (in_EAX < 0) {
    local_c = 1;
    if (in_EAX == -0x15) {
      param_1 = param_1 + -0x15;
      local_c = 3;
    }
    in_EAX = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffffffff;
  }
  uVar1 = *unaff_EDI;
  local_8 = (int *)unaff_EDI[2];
  if (uVar1 != 0) {
    do {
      if ((*local_8 == param_1) && (local_8[1] == in_EAX)) break;
      uVar3 = uVar3 + 1;
      local_8 = local_8 + 3;
    } while (uVar3 < uVar1);
    if (uVar3 < uVar1) goto LAB_0041ba6c;
  }
  iVar2 = FUN_0041b550(&local_8);
  if (iVar2 != 0) {
    return;
  }
  *local_8 = param_1;
  local_8[1] = in_EAX;
  local_8[2] = local_c;
LAB_0041ba6c:
  iVar2 = FUN_0041b70e(param_2,&local_c);
  if (((iVar2 == 0) && (iVar2 = FUN_0041b62e(), iVar2 == 0)) && (param_3 != (uint *)0x0)) {
    *param_3 = uVar3;
  }
  return;
}

