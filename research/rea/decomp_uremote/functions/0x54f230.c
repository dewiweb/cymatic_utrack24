// rea decompile_all
// name: FUN_0054f230
// address: 0x54f230
// body: available
// range: 0x54f230-0x54f2d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054f230(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
                 undefined2 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_24 [2];
  undefined2 local_22;
  undefined4 local_20;
  uint local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 4) != -1) {
    local_10 = 0;
    local_8 = 0x10;
    local_c = Ordinal_17(*(undefined4 *)(in_ECX + 4),param_1,param_2,0,local_24,&local_8);
    if (local_c == -1) {
      iVar2 = Ordinal_111();
      if (iVar2 != 0x2733) {
        local_10 = 2;
      }
    }
    else {
      *param_3 = local_c;
      uVar1 = Ordinal_15(local_22);
      *param_5 = uVar1;
      *param_4 = local_20;
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

